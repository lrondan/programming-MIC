# panel_0/urls.py
from django.urls import path
from . import views

urlpatterns = [
    path('', views.dashboard_iot, name='dashboard_iot'),
]