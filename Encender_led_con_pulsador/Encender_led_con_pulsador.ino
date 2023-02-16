int pulsador = 8;
int led = 7;

void setup() {
  pinMode(led,OUTPUT);
  pinMode(pulsador,INPUT); 

}

void loop() {
  if(digitalRead(pulsador) == HIGH){
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }
  
 

}
