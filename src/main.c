// Fichier : src/main.c

#include <avr/io.h>
#include <util/delay.h>
#include "lcd.h"

uint16_t read_adc() {
    ADMUX = (1<<REFS0); // AVcc as reference
    ADCSRA = (1<<ADEN)|(1<<ADSC)|(1<<ADPS1)|(1<<ADPS0);
    while (ADCSRA & (1<<ADSC));
    return ADC;
}

int main(void) {
    lcd_init();
    lcd_clear();

    while (1) {
        uint16_t value = read_adc();
        float voltage = value * 5.0 / 1024.0;
        float tempC = voltage * 100;

        lcd_gotoxy(0, 0);
        lcd_print("Temp:");
        lcd_gotoxy(0, 1);
        char buffer[16];
        sprintf(buffer, "%.2f C", tempC);
        lcd_print(buffer);

        _delay_ms(1000);
    }
}
