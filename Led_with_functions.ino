int led = 9;

void setup() {
pinMode(led, OUTPUT);

}

void loop() {
lightUp( led, 500, 5);
lightUp( led, 250, 5);
lightUp( led, 100, 25);
}

void lightUp( int pin, int temps, int maxRep){
  for (int i=0; i <= maxRep; i++){
    digitalWrite(pin,HIGH);
    delay(temps);
    digitalWrite(pin,LOW);
    delay(temps);
  }
}

