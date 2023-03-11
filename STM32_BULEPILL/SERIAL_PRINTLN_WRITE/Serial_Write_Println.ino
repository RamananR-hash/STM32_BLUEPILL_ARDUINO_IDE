void setup() {
  pinMode(PA7,INPUT_ANALOG);
  Serial.begin(115200);
 
}

void loop() {
float value=analogRead(PA7);
Serial.println(value);
}
