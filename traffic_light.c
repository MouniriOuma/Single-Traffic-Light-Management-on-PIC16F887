// Configuration du PIC16F887
void main() {
    TRISB = 0x00;
    PORTB = 0x00;

    while (1) {
        // 1. Allumer LED Verte (RB2) - 32s
        PORTB = 0b00000100;
        Delay_ms(32000);

        // 2. Allumer LED Orange (RB1) - 4s
        PORTB = 0b00000010;
        Delay_ms(4000);

        // 3. Allumer LED Rouge (RB0) - 32s
        PORTB = 0b00000001;
        Delay_ms(32000);

        // 4. Allumer LED Rouge + Orange (RB0 + RB1) - 4s
        PORTB = 0b00000011;
        Delay_ms(4000);
    }
}