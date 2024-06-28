// C++ code
//
int button = 2;
void setup()
{
    pinMode(10, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(button, INPUT); // объявляем пин 2 как вход
}
void loop()
{
    digitalWrite(10, HIGH); // зеленый для машин
    digitalWrite(6, HIGH);  // красный для людей

    if (digitalRead(button) == HIGH)
    { // проверка получения сигнала
        digitalWrite(6, HIGH);
        delay(2000);
        for (int i = 0; i < 3; i++) // мигающий зеленый для машин
        {
            digitalWrite(10, LOW);
            delay(1000);
            digitalWrite(10, HIGH);
            delay(1000);
        }
        digitalWrite(10, LOW);

        digitalWrite(9, HIGH); // желтый для машин
        delay(3000);
        digitalWrite(9, LOW); // желтый для машин

        digitalWrite(8, HIGH); // красный для машин
        delay(1000);
        digitalWrite(6, LOW);
        digitalWrite(7, HIGH); // зеленый для пешеходов
        delay(6000);
        digitalWrite(7, LOW);  // зеленый для пешеходов
        digitalWrite(6, HIGH); // красный для пешеходов
        delay(1000);
        digitalWrite(8, LOW); // красный для машин

        digitalWrite(9, HIGH); // желтый для машин
        delay(2000);
        digitalWrite(9, LOW);
        digitalWrite(10, HIGH); // зеленый для  машин
        delay(6000);
    }
    else
    {
        digitalWrite(6, LOW); // выключаем светодиод
    }
}