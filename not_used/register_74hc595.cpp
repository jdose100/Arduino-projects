/*
 * В этом коде с помощью регистра сдвига 78HC595 активируются лампочки
*/

#include <Arduino.h>

int latchPin = 8; // пин подключенный к ST_CP (RLCK) регистра сдвига
int clockPin = 12; // пин подключенный к SH_CP (SRLCK) регистра сдвига
int dataPin = 11; // пин подключенный к DS (DATA) регистра сдвига

void setup()
{
    pinMode(latchPin, OUTPUT);
    pinMode(clockPin, OUTPUT);
    pinMode(dataPin, OUTPUT);

    Serial.begin(9600);
}

void loop()
{
    for (int numToDisplay = 0; numToDisplay < 256; numToDisplay++)
    {
        Serial.print(numToDisplay);
        Serial.print(" => ");
        Serial.println(numToDisplay, BIN);

        digitalWrite(latchPin, LOW);
        shiftOut(dataPin, clockPin, LSBFIRST, numToDisplay);
        digitalWrite(latchPin, HIGH);
        delay(100);
    }
}

