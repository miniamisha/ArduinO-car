int duration;
int distance;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
 pinMode(5,OUTPUT);
   pinMode(10,OUTPUT);
    pinMode(6,OUTPUT);
     pinMode(9,OUTPUT);
      pinMode(2,OUTPUT);
       pinMode(3,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(2,LOW);
delay(1);
digitalWrite(2,HIGH);
delay(10);
digitalWrite(2,LOW);


duration=pulseIn(3,HIGH);
distance=(duration/2)/29.1;.
Serial.println(distance);
delay(1000);
if(distance<10)
{
 analogWrite(6,200);//left
analogWrite(9,0);
analogWrite(5,0);
analogWrite(10,0);
}
else if(distance>10)
{
analogWrite(6,200);
analogWrite(9,0);
analogWrite(5,0);
analogWrite(10,200); 
  }

}
