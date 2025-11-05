# panel_0/management/commands/cargar_historial.py
from django.core.management.base import BaseCommand
from panel_0.models import Dispositivo
from panel_0.utils import guardar_datos_thingspeak

class Command(BaseCommand):
    help = 'Carga TODO el historial de ThingSpeak (hasta 8000 puntos)'

    def add_arguments(self, parser):
        parser.add_argument('--resultados', type=int, default=8000, help='Máximo 8000')

    def handle(self, *args, **options):
        resultados = min(options['resultados'], 8000)
        dispositivos = Dispositivo.objects.filter(thingspeak_channel__isnull=False)
        
        self.stdout.write(f"Cargando hasta {resultados} puntos por dispositivo...")
        for d in dispositivos:
            self.stdout.write(f"  → {d.nombre} (Channel {d.thingspeak_channel})")
            guardar_datos_thingspeak(d, resultados=resultados)

        self.stdout.write(self.style.SUCCESS(f'¡Historial cargado! ({resultados} puntos máx)'))