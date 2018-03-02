#include <IRremote.h>
#include <IRremoteInt.h>


#define led 22
String cmd;

void setup() {
  Serial.begin(9600); //inicializa serial
 //BABOSEIRA
  Serial.println("Ea, Sou um Arduino, bro");
  Serial.println("Digite 'acenda','apaga' ou 'pisca' e espere a magica");
  delay(1000);
 //SETUP
  pinMode(led,OUTPUT);
}

void loop() {
int i=0; 
 
  while(Serial.available()){
    cmd = Serial.readString();
    
    if(cmd == "acenda")
      digitalWrite(led, HIGH);
  
   else if(cmd == "apaga")
      digitalWrite(led, LOW);
      
   else if(cmd == "pisca"){
      while (i<20){
      digitalWrite(led, HIGH);
      delay(100);
      digitalWrite(led, LOW);
      delay(100);
      i++;
      }
   }
   else
     Serial.println("comando invalido");
 }
}
