int led = 9;

void setup() {
pinMode(led, OUTPUT);

}

void loop() {
for (int i=0; i <= 5; i++){
digitalWrite(led,HIGH);
delay(500);
digitalWrite(led,LOW);
delay(500);
}

for (int i=0; i <= 5; i++){
digitalWrite(led,HIGH);
delay(250);
digitalWrite(led,LOW);
delay(250);
}

for (int i=0; i <= 5; i++){
digitalWrite(led,HIGH);
delay(100);
digitalWrite(led,LOW);
delay(100);
}

}
