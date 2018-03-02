#define led 22
#define but 28
void setup() {
  pinMode(led, OUTPUT);
  pinMode(but, INPUT);

}

void loop() {
  while(digitalRead(but) == 1){ //se botao for apertado
  delay(5);
   if(digitalRead(but) == 0){
   if(digitalRead(led)== 0){ //e led estiver apagado
     digitalWrite(led,HIGH); //acendo-o
     delay(10);
   }
   else{                    //e led estiver aceso
    digitalWrite(led,LOW); //
     delay(10);
   }
  }}

}
