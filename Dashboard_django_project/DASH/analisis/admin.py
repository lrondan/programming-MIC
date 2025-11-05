# analisis/admin.py
from django.contrib import admin
from .models import Lectura
from panel_0.models import Dispositivo

@admin.register(Lectura)
class LecturaAdmin(admin.ModelAdmin):
    list_display = ('dispositivo', 'nombre_campo', 'valor', 'timestamp', 'hora')
    list_filter = (
        'dispositivo__nombre',  # ← FILTRO POR NOMBRE
        'dispositivo',          # ← FILTRO POR OBJETO
        'campo',
        'timestamp'
    )
    search_fields = (
        'dispositivo__nombre',  # Buscar por nombre
        'dispositivo__thingspeak_channel',
    )
    date_hierarchy = 'timestamp'
    ordering = ('-timestamp',)
    list_per_page = 50  # Más rápido

    def nombre_campo(self, obj):
        num = obj.campo[-1]
        return getattr(obj.dispositivo, f'label{num}', obj.campo)
    nombre_campo.short_description = 'Campo'
    nombre_campo.admin_order_field = 'campo'

    def hora(self, obj):
        return obj.timestamp.strftime('%H:%M:%S')
    hora.short_description = 'Hora'
    hora.admin_order_field = 'timestamp'

    # OPTIMIZACIÓN: Solo cargar campos necesarios
    def get_queryset(self, request):
        qs = super().get_queryset(request)
        return qs.select_related('dispositivo')