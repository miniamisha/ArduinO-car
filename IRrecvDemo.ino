/*
 * IRremote: IRrecvDemo - demonstrates receiving IR codes with IRrecv
 * An IR detector/demodulator must be connected to the input RECV_PIN.
 * Version 0.1 July, 2009
 * Copyright 2009 Ken Shirriff
 * http://arcfn.com
 */

#include <IRremote.h>
long i;
int RECV_PIN = 11;

IRrecv irrecv(RECV_PIN);

decode_results results;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);


}

void loop() {
  if (irrecv.decode(&results)) {
    delay(500);
    Serial.println(results.value);
    irrecv.resume(); // Receive the next value
  }
   if(i==2689)
  {
    digitalWrite(6,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(5,LOW);
    
    }
    else if(i==97)
    {
      digitalWrite(6,LOW);
       digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(5,HIGH);

      
      
      }
}
