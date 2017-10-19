
#define Lmotorf 6
#define Lmotorf 9
#define rmotorf 10
#define rmotorf 5



void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
  
  pinMode(5,OUTPUT);
   pinMode(10,OUTPUT);
    pinMode(6,OUTPUT);
     pinMode(9,OUTPUT);
      pinMode(2,INPUT);
       pinMode(3,INPUT);
        pinMode(4,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int sensor1=digitalRead(2);
  int sensor2=digitalRead(3);
  int sensor3=digitalRead(4); 
 if((sensor1==1)&&(sensor2==0)&&(sensor3==1))//forward
 {
analogWrite(6,200);
analogWrite(9,0);
analogWrite(5,0);
analogWrite(10,200);
 }
 if((sensor1==0)&&(sensor2==0)&&(sensor3==1))//left
 {
  analogWrite(6,200);
analogWrite(9,0);
analogWrite(5,0);
analogWrite(10,0);
 }
 if((sensor1==1)&&(sensor2==0)&&(sensor3==0))//right
 {
analogWrite(6,0);
analogWrite(9,0);
analogWrite(5,0);
analogWrite(10,200);
 }
 




}
