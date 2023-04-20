int s=13;
int l1=12;
int l2=11;
int l3=10;
int l4=9;
int In=0;
int last=0;
int live=0;


void setup() {
pinMode(s, INPUT);
pinMode(l1, OUTPUT);
pinMode(l2, OUTPUT);
pinMode(l3, OUTPUT);
pinMode(l4, OUTPUT);

  digitalWrite(l1, LOW);
  digitalWrite(l2, LOW);
  digitalWrite(l3, LOW);
  digitalWrite(l4, LOW);
}

void loop() {

In=digitalRead(s);
if(In==0){
delay(50);
In=digitalRead(s);
  if(In==1){
  live=last+1; 
  }
}
else
{
  delay(50);
}

switch(live) 
{
  case 1:digitalWrite(l1, HIGH);
         digitalWrite(l4, LOW);
         last=live;
         break;
  case 2:digitalWrite(l2, HIGH);
         digitalWrite(l1, LOW);
         last=live;
         break;
  case 3:digitalWrite(l3, HIGH);
         digitalWrite(l2, LOW);
         last=live;
         break;
  default:digitalWrite(l4, HIGH);
         digitalWrite(l3, LOW);
         last=0;
         break;
}
}
