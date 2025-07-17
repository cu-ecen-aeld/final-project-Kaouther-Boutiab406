# Fichier : Makefile

MCU=atmega328p
F_CPU=16000000UL
CC=avr-gcc
OBJCOPY=avr-objcopy

CFLAGS=-mmcu=$(MCU) -DF_CPU=$(F_CPU) -Wall -Os
LDFLAGS=

TARGET=main
SRC=src/main.c lib/lcd.c

all:
	$(CC) $(CFLAGS) $(SRC) -Iinclude -o $(TARGET).elf
	$(OBJCOPY) -O ihex $(TARGET).elf $(TARGET).hex

clean:
	rm -f *.elf *.hex
