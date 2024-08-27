/*
 * Игра "Кто первый?". Победит тот кто первый нажмёт на кноку.
*/
#include <Arduino.h>

#define BUZZER 11 // пьезоизлучатель (звук)
#define BUTTON1 2 // игрок 1
#define BUTTON2 3 // игрок 2
#define LAMP_RED1 5 // красный светодиот игрока 1
#define LAMP_RED2 6 // красный светодиот игрока 2
#define LAMP_GREEN1 7// зелёный светодиот игрока 1
#define LAMP_GREEN2 8 // зелёный светодиот игрока 2

void setup()
{
    pinMode(BUZZER, OUTPUT);
    pinMode(LAMP_RED1, OUTPUT);
    pinMode(LAMP_RED2, OUTPUT);
    pinMode(LAMP_GREEN1, OUTPUT);
    pinMode(LAMP_GREEN2, OUTPUT);

    pinMode(BUTTON1, INPUT);
    pinMode(BUTTON2, INPUT);
}

void loop()
{ 
    srandom(rand());
    delay(random(1000, 5000)); // ждём от 1 до 5 секунд
    // отключаем все светодиоды
    digitalWrite(LAMP_RED1, LOW);
    digitalWrite(LAMP_RED2, LOW);
    digitalWrite(LAMP_GREEN1, LOW);
    digitalWrite(LAMP_GREEN2, LOW);

    delay(50);
    tone(BUZZER, 3000, 250); // проигрываем звук

    // узнаём кто победил
    int8_t winner = 0;
    while(1)
    {
        if (digitalRead(BUTTON1))
        {
            winner = 1;
            break;
        }
        if (digitalRead(BUTTON2))
        {
            winner = 2;
            break;
        }
    }

    // включаем у победителя зелёный светодиот,
    // а у проигравшего красный
    if (winner == 1)
    {
        digitalWrite(LAMP_GREEN1, HIGH);
        digitalWrite(LAMP_RED2, HIGH);
    } else if (winner == 2)
    {
        digitalWrite(LAMP_GREEN2, HIGH);
        digitalWrite(LAMP_RED1, HIGH);
    }
}

