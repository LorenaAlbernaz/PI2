// Pino ligado ao sensor de nivel de liquido
int nivel_1 = 4;
int nivel_2 = 22;
int nivel_3 = 23;


void setup()
{
  Serial.begin(9600);
  pinMode(nivel_1 , INPUT);
  pinMode(nivel_2 , INPUT);
  pinMode(nivel_3 , INPUT);
}

void loop()
{
  int estado1 = digitalRead(nivel_1);
  Serial.print("Nivel 1 : ");
  Serial.println(estado1);

  int estado2 = digitalRead(nivel_2);
  Serial.print("Nivel 2 : ");
  Serial.println(estado2);

  int estado3 = digitalRead(nivel_3);
  Serial.print("Nivel 3: ");
  Serial.println(estado3);
  delay(1000);
}
