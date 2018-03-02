#define ldr A0
#define led 40

void setup() {
  pinMode(led, OUTPUT); //seta led como saida
  Serial.begin(9600); //inicializa serial
}

void loop() {
  Serial.println(analogRead(ldr));
  //media luminosidade
  if(analogRead(ldr)>300 && analogRead(ldr)<=600)
    digitalWrite(led,HIGH);
    
  //baixa luminosidade  
  else if(analogRead(ldr)<=300)
    digitalWrite(led,LOW);
    
  //luminosidade muito ALTAAAA
  while(analogRead(ldr)>600){
      digitalWrite(led,LOW);
      delay(200);
      digitalWrite(led,HIGH);
      delay(200);
    }
  delay(1000);

}
