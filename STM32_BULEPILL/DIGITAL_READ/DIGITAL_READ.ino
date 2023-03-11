void setup() {
  pinMode(PC13,OUTPUT);
  pinMode(PA8,INPUT_PULLUP);
 
}

void loop() {
bool value=digitalRead(PA8);
digitalWrite(PC13,value);

}
