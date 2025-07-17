# Embedded Weather Station Project

## Description

Ce projet embarqué consiste à créer une station météo sur Raspberry Pi avec un capteur DHT22 pour mesurer la température et l’humidité, affichage sur écran LCD I2C, et stockage local des données.

## Matériel utilisé

- Raspberry Pi 4
- Capteur DHT22
- Écran LCD 16x2 I2C

## Build System

Nous utilisons Yocto pour construire l’image Linux embarquée avec notre application C incluse.

## Démarrage

```bash
make
./bin/weather_station

