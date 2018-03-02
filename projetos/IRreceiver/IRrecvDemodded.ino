/*
 * IRremote: IRrecvDemo - demonstrates receiving IR codes with IRrecv
 * An IR detector/demodulator must be connected to the input RECV_PIN.
 * Version 0.1 July, 2009
 * Copyright 2009 Ken Shirriff
 * http://arcfn.com
 */

#include <IRremote.h>
#define yel 30
#define red 40
#define gre 50
 
/* GREEN
FF02FD
FFFFFFFF
*/

/* RED
FF22DD
FFFFFFFF
*/

/* YEL
FFE01F
FFFFFFFF
*/

int RECV_PIN = 24;

IRrecv irrecv(RECV_PIN);

decode_results results;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
  
  pinMode(gre, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(yel, OUTPUT);
  
}

void loop() {
  
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);

    if (results.value == 0xFF02FD){ //acende verde
      digitalWrite(gre,HIGH);
      digitalWrite(red,LOW);
      digitalWrite(yel,LOW);
    }
    else if (results.value == 0xFF22DD){ //acende vermelho
      digitalWrite(red,HIGH);
      digitalWrite(gre,LOW);
      digitalWrite(yel,LOW);
    }
    else if (results.value == 0xFFE01F){ //acende amarelo
      digitalWrite(yel,HIGH);
      digitalWrite(red,LOW);
      digitalWrite(gre,LOW);
    }
    else
      Serial.println("botao invalido");
    
    irrecv.resume(); // Receive the next value
  }

  
}
