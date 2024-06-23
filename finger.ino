void setup()
{ 
  pinMode(8, INPUT);
  pinMode(13, OUTPUT);
  
  // Turn builtin LED off
  digitalWrite(13, LOW);
}

void loop()
{
 
  if(digitalRead(8) == HIGH) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }

  delay(100);
}
