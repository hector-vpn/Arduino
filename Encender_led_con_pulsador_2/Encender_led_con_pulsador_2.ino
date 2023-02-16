int led = 7;
int pulsador = 8;
void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(pulsador,INPUT);

}

void loop() {
  if(digitalRead(pulsador) == HIGH){
    digitalWrite(led,HIGH);
    Serial.println(digitalRead(pulsador));
  }
  else{
    digitalWrite(led,LOW);
    Serial.println(digitalRead(pulsador));
  }
  
}
