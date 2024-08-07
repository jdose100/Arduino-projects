/*
 * Светофор. Переключает нажатием кнопки (на 2 пине) лампочки.
*/

#include <Arduino.h>
#define BUTTON_PIN 2 // 2 пин это кнопка
#define LAMP_1 6 // красный
#define LAMP_2 5 // жёлтый
#define LAMP_3 4 // зелёный

void setup()
{
    Serial.begin(9600);
    pinMode(BUTTON_PIN, INPUT);
    
    pinMode(LAMP_1, OUTPUT);
    pinMode(LAMP_2, OUTPUT);
    pinMode(LAMP_3, OUTPUT);
}

int lampNum = 0;
void loop()
{
    lampNum += digitalRead(BUTTON_PIN);
    Serial.println(lampNum);
    if (lampNum == 0)
    {
        digitalWrite(LAMP_1, HIGH);
        digitalWrite(LAMP_2, LOW);
        digitalWrite(LAMP_3, LOW);
    } 
    else if (lampNum == 1)
    {
        digitalWrite(LAMP_1, LOW);
        digitalWrite(LAMP_2, HIGH);
        digitalWrite(LAMP_3, LOW);
    }
    else if (lampNum == 2)
    {
        digitalWrite(LAMP_1, LOW);
        digitalWrite(LAMP_2, LOW);
        digitalWrite(LAMP_3, HIGH);
    } else lampNum = 0;
    delay(200);
}

