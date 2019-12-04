#include <LowPower.h>
#define PIN_V 3 // Определяем пин, используемый для питания реле
#define PIN_RELAY 2 // Определяем пин, используемый для подключения реле
void setup()
{
  pinMode(PIN_V, OUTPUT); // Объявляем пин питания реле как выход
  pinMode(PIN_RELAY, OUTPUT); // Объявляем пин управления реле как выход
  digitalWrite(PIN_V, HIGH); // Включаем питание реле
  digitalWrite(PIN_RELAY, HIGH); // Выключаем реле - посылаем высокий сигнал
  Serial.begin(9600);
}
void loop()
{
    Serial.println("Start of work");
  delay(15000);
  digitalWrite(PIN_RELAY, LOW); // Включаем реле - посылаем низкий уровень сигнала
  delay(1000);
  digitalWrite(PIN_RELAY, HIGH); // Отключаем реле - посылаем высокий уровень сигнала
    Serial.println("Working hard, sleeping good");
  delay(1000);  
    digitalWrite(PIN_V, LOW); // Выключаем питание реле
 delay(1400);   
LowPower.powerDown(SLEEP_FOREVER, ADC_OFF, BOD_OFF); // Баю-баюшки баю
    Serial.println("WHHHAAAT YOOUU ALLL FUUUCKING WAAANT???");
}
