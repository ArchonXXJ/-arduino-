void setup()
{
  Serial.begin(9600);

  pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  char control;
  control = Serial.read();
  if (Serial.available())
  if (control == '1') 
  {
      digitalWrite(8, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      delay(1000); // Wait for 1000 millisecond(s)
      digitalWrite(13, LOW);
      delay(1000); // Wait for 1000 millisecond(s)
  }
  else if(control == '0')
  {
      digitalWrite(7, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(3, HIGH);
      delay(1000); // Wait for 1000 millisecond(s)
      digitalWrite(2, LOW);
      delay(1000); // Wait for 1000 millisecond(s)
  }
}
