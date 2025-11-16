# panel_0/forms.py
from django import forms
from .models import Dispositivo

class DispositivoForm(forms.ModelForm):
    class Meta:
        model = Dispositivo
        fields = ['nombre', 'thingspeak_channel', 'thingspeak_read_key', 'mqtt_topic', 'icono',
                   'label1', 'unidad1', 'label2', 'unidad2','label3', 'unidad3', 'label4', 'unidad4',
                     'label5', 'unidad5', 'label6', 'unidad6', 'label7', 'unidad7', 'label8', 'unidad8']
        widgets = {
            'nombre': forms.TextInput(attrs={'placeholder': 'ESP32 Sala'}),
            'thingspeak_channel': forms.NumberInput(attrs={'placeholder': '1234567'}),
            'thingspeak_read_key': forms.TextInput(attrs={'placeholder': 'ABCD1234EFGH5678'}),
            'mqtt_topic': forms.TextInput(attrs={'placeholder': 'home/sala/temperatura'}),
            'icono': forms.Select(choices=[
                ('microchip', 'Microchip'),
                ('thermometer-half', 'Temperatura'),
                ('tint', 'Humedad'),
                ('wind', 'Viento'),
                ('lightbulb', 'Luz'),
                ('bolt', 'Voltaje'),
            ]),
        }