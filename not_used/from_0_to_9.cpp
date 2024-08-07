/*
 * Это код который выводит на семисегментный индикатор с общим катодом
 * цифры от 0 до 9. Используются цифровые выводы от 2 до 8
*/
#include <Arduino.h>
#define TIME 255

void setup()
{
    for (int i = 2; i <= 8; i++)
        pinMode(i, OUTPUT);
}

void loop()
{
    // устанавливаем 0
    for (int i = 2; i <= 7; i++)
        digitalWrite(i, HIGH);
    delay(TIME);

    // гасим 0
    for (int i = 2; i <= 7; i++)
        digitalWrite(i, LOW);
    delay(TIME);

    // устанавливаем 1
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    delay(TIME);

    // гасим 1
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    delay(TIME);

    // устанавливаем 2
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    delay(TIME);

    // гасим 2
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(8, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    delay(TIME);

    // устанавливаем 3
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(8, HIGH);
    delay(TIME);

    // гасим 3
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(8, LOW);
    delay(TIME);

    // устанавливаем 4
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
    delay(TIME);

    // гасим 4
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
    delay(TIME);

    // устанавливаем 5
    digitalWrite(2, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
    delay(TIME);
    
    // гасим 5
    digitalWrite(2, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    delay(TIME);
    
    // устанавливаем 6
    digitalWrite(2, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(8, HIGH);
    delay(TIME);

    // гасим 6
    digitalWrite(2, LOW);
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(8, LOW);
    delay(TIME);

    // устанавливаем 7
    digitalWrite(2, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    delay(TIME);
    
    // гасим 7
    digitalWrite(2, LOW);
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
    delay(TIME);

    // устанавливаем 8
    for (int i = 2; i <= 8; i++)
        digitalWrite(i, HIGH);
    delay(TIME);

    for (int i = 2; i <= 8; i++)
        digitalWrite(i, LOW);
    delay(TIME);

    // устанавливаем 9
    for (int i = 2; i <= 8; i++)
    {
        if (i == 6) continue;
        digitalWrite(i, HIGH);
    }
    delay(TIME);

    // гасим 9
    for (int i = 2; i <= 8; i++)
    {
        if (i == 6) continue;
        digitalWrite(i, LOW);
    }
    delay(TIME);
}
