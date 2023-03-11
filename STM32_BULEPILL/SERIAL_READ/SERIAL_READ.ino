
char char_data= ' ' ;
void setup() {
  pinMode(PC13,OUTPUT);
  Serial.begin(115200);
  digitalWrite(PC13,LOW);
 
}

void loop() {
  if(Serial.available()>0){
    Serial.println("Connected");
    char_data=Serial.read();
  }
  else if(Serial.available()<0){
    Serial.println("Not Connected");
  }
  if(char_data){
    if(char_data=='a'){
      digitalWrite(PC13,LOW);
      Serial.println("PC13 ON");
    }
    else if (char_data=='s'){
      digitalWrite(PC13,HIGH);
      Serial.println("PC13 OFF");
    }
  }
}
