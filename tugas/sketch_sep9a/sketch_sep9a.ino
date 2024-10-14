#define LED 2
void setup() {
// Set pin mode
pinMode(LED,OUTPUT);
}
void loop() {
delay(50);
digitalWrite(LED,HIGH);
delay(100);
digitalWrite(LED,LOW);
}
