#define led 12
#define pot A0

void setup() {
  
}

float a = 1;

void loop() {
  
  analogWrite(led, (analogRead(pot)/4));

}
