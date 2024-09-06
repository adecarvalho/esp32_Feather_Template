#include <Arduino.h>
#include <Ticker.h>

// const
const uint32_t PERIOD = 1000;
const uint8_t LED_PIN = 13;

// prototypes
void action();

// obj
Ticker mticker(action, PERIOD, 0, MILLIS);

// var

//************** */
void action()
{
  digitalWrite(LED_PIN, !digitalRead(LED_PIN));
  Serial.println("action");
}
//************** */
void setup()
{
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, 0);
  //
  mticker.start();
}
//*************** */
void loop()
{
  mticker.update();
}
