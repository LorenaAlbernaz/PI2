/**
 * Authorization.ino
 *
 *  Created on: 09.12.2015
 *
 */

#include <Arduino.h>

// Pino ligado ao sensor de nivel de liquido
int pinosensor = 4;


void setup()
{
  Serial.begin(9600);
  pinMode(pinosensor, INPUT);
}

void loop()
{
  int estado = digitalRead(pinosensor);
  Serial.print("Estado sensor : ");
  Serial.println(estado);

  delay(100);
}
