// Fichier : include/lcd.h

#ifndef LCD_H
#define LCD_H

#include <stdint.h>

void lcd_init();
void lcd_clear();
void lcd_gotoxy(uint8_t x, uint8_t y);
void lcd_print(char* str);

#endif
