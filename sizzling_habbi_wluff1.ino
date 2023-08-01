// C++ code
int reading1=0;
  int reading2=0;
void setup()
{
 pinMode(12,INPUT);
   pinMode(13,INPUT);
pinMode(6,OUTPUT);
pinMode(9,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);

}

void loop()
{
  digitalWrite(2,0);
  digitalWrite(4,0);
  reading1=digitalRead(12);
  if(reading1==1){digitalWrite(6,0);digitalWrite(9,0);}
   else{digitalWrite(6,1);digitalWrite(9,1);}
   reading2=digitalRead(13);
  if(reading2==1){digitalWrite(3,0);digitalWrite(5,0);}
   else{digitalWrite(3,1);digitalWrite(5,1);}
}