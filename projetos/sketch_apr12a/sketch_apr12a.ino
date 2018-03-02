#define ledred 22
#define ledyel 36
#define ledgre 44

#define ver 31
void setup() {
  // put your setup code here, to run once:
  pinMode(ledred,OUTPUT);
  pinMode(ledyel,OUTPUT);
  pinMode(ledgre,OUTPUT);
  
  pinMode(ver,INPUT);
  
}

void loop() {
  while(ver == 1){
//VERDE 
  digitalWrite(ledred,LOW); //RED APAGA
  digitalWrite(ledgre,HIGH); //VERDE ACENDE
  delay(50);
//AMARELO
  digitalWrite(ledgre,LOW);//VERDE APAGA
  digitalWrite(ledyel,HIGH);//AMARELO ACENDE
  delay(50);
//VERMELHO
  digitalWrite(ledyel,LOW);//AMARELO APAGA
  digitalWrite(ledred,HIGH);//VERMELHO ACENDE
  delay(50);
  }
}
