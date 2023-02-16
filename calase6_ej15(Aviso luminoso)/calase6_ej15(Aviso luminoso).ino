void setup()
{
  Serial.begin(9600);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  if(Serial.available()>0)
  {
    char caracter=Serial.read();
    
    if(caracter=='a')
    {
      digitalWrite(4, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(2, HIGH);
    }
    
    if(caracter=='b')
    {
      digitalWrite(4, LOW);
      digitalWrite(3, LOW);
      digitalWrite(2, LOW);
      
      for (int pin = 2; pin < 5; pin++)
      {
        caracter=Serial.read();
        digitalWrite(pin, HIGH);
        delay(1000);
        digitalWrite(pin, LOW);
        
        if(pin==4)
        {
          pin=1;
        }
        
        if(caracter=='c')
        {
          pin=6;
        }
        if(caracter=='a')
        {
          pin=6;
          digitalWrite(4, HIGH);
     	    digitalWrite(3, HIGH);
    	    digitalWrite(2, HIGH);
        }
      }
    }
    
    if(caracter=='c')
    {
      digitalWrite(4, LOW);
      digitalWrite(3, LOW);
      digitalWrite(2, LOW);
    }
  }
}