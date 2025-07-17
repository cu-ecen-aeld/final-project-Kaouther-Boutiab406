// Fichier : lib/lcd.c

#include <avr/io.h>
#include <util/delay.h>
#include "lcd.h"

void lcd_command(unsigned char cmd) {
    // Envoie une commande (à compléter selon câblage)
}

void lcd_data(unsigned char data) {
    // Envoie une donnée (à compléter selon câblage)
}

void lcd_init() {
    // Initialisation de l'écran LCD
}

void lcd_clear() {
    lcd_command(0x01);
    _delay_ms(2);
}

void lcd_gotoxy(uint8_t x, uint8_t y) {
    // Positionne le curseur (selon LCD 16x2)
}

void lcd_print(char* str) {
    while(*str) {
        lcd_data(*str++);
    }
}
