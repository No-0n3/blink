#include <avr/io.h>
#include <util/delay.h>

int main(void) {
    DDRB |= (1 << DDB5);
    PORTB |= (0 << PORTB5);

    while (1) {
        _delay_ms(500);
        PORTB ^= (1 << PORTB5);
    }
}