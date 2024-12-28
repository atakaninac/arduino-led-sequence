const int pins[] = {13, 12, 8, 7, 4, 2};
const int pinCount = 6;
                    
void setup(){
  for (int i=0; i<pinCount; i++){
    pinMode(pins[i], OUTPUT);
  }
}
                    
void loop(){
  for (int i=0; i<pinCount; i++){
  	digitalWrite(pins[i], HIGH);
  	delay(500);
  	digitalWrite(pins[i], LOW);
  }
  
  for (int i=pinCount-1; i>=0; i--){
    digitalWrite(pins[i], HIGH);
    delay(500);
    digitalWrite(pins[i], LOW);
  }
}
