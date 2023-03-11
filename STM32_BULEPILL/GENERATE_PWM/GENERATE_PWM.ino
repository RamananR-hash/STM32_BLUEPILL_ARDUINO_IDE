HardwareTimer timer(1);
void setup() {
  pinMode(PA8, PWM);
  timer.setPrescaleFactor(1);
  timer.setOverflow(255);
}
void loop() {
pwmWrite(PA8,255);                   
}
