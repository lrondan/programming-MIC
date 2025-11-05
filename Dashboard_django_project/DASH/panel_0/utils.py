# panel_0/utils.py
import requests
from django.utils import timezone
from datetime import datetime
import pytz
from analisis.models import Lectura
from .models import Dispositivo

def guardar_datos_thingspeak(dispositivo, resultados=100):
    """
    Guarda TODOS los feeds disponibles (hasta 'resultados')
    """
    if not dispositivo.thingspeak_channel:
        return

    try:
        # OBTENER MÚLTIPLES FEEDS
        url = f"https://api.thingspeak.com/channels/{dispositivo.thingspeak_channel}/feeds.json?results={resultados}"
        response = requests.get(url, timeout=20)
        if response.status_code != 200:
            return

        feeds = response.json().get('feeds', [])
        if not feeds:
            return

        # GUARDAR CADA FEED
        for feed in feeds:
            created_at = feed.get('created_at')
            if not created_at:
                continue

            try:
                ts = datetime.strptime(created_at, "%Y-%m-%dT%H:%M:%SZ").replace(tzinfo=pytz.UTC)
            except:
                continue

            for i in range(1, 9):
                field_key = f'field{i}'
                if feed.get(field_key):
                    try:
                        valor = float(feed[field_key])
                        # GUARDAR O ACTUALIZAR
                        Lectura.objects.update_or_create(
                            dispositivo=dispositivo,
                            campo=field_key,
                            timestamp=ts,
                            defaults={'valor': valor}
                        )
                    except (ValueError, TypeError):
                        continue

        # Actualizar último dato
        ultimo_feed = feeds[-1]
        ultimo_ts = datetime.strptime(ultimo_feed['created_at'], "%Y-%m-%dT%H:%M:%SZ").replace(tzinfo=pytz.UTC)
        dispositivo.ultimo_dato = ultimo_ts
        dispositivo.save()

    except Exception as e:
        print(f"Error al guardar datos históricos: {e}")