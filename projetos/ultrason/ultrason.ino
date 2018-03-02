#define trig 30
#define echo 40
#define buz 24
long dist;

void setup() {
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(buz,OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  
 //PULSO
  digitalWrite(trig,HIGH);
  delayMicroseconds(5);
  digitalWrite(trig,LOW);

 //DISPLAY DISTANCIA
  dist = pulseIn(echo,HIGH)/58;
  Serial.println(dist); //dist em cm
  

  if(dist<30){
    digitalWrite(buz,HIGH);
    delay(dist*15);
    digitalWrite(buz,LOW);
    delay(dist*15);
    //digitalWrite(buz,HIGH);
    //delay(dist);
  }
  else{
    digitalWrite(buz,HIGH);
    delay(200);
    digitalWrite(buz,LOW);
    delay(2000);
  }

  //delay(1000);
}
