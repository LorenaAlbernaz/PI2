/**
 * Authorization.ino
 *
 *  Created on: 09.12.2015
 *
 */

#include <Arduino.h>

#include <WiFi.h>
#include <WiFiMulti.h>

int valvula = 8; // sinal do rele para válvula
 
void setup() {
  pinMode(valvula, OUTPUT); // declara válvula como saída
}
 
void loop() {
 
 // Leitura do sensor no pino A0 e armazenamento em SensorValue
 
 int sensorValue = analogRead(A0);
)
 
 if (sensorValue > 600){
   // se sim, libera  por 1s
   digitalWrite(valvula,LOW);
   delay(1000);
   digitalWrite(valvula,HIGH); // desliga válvula
 }
 
 else{
 // se não, interrompe a passagem 
   digitalWrite(valvula,HIGH);
   delay(1000);
  }
  delay(3000); // Aguarda 3s para verificar novamente
}
