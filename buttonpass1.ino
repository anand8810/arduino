int led2=8;
int led1=2;
int buttonpin1=3;
int buttonpin2=4;
int buttonpin3=5;
int buttonpin4=6;

int buttonstate1=0;
int buttonstate2=0;
int buttonstate3=0;
int buttonstate4=0;
void setup() {
  // put your setup code here, to run once:
 pinMode(buttonpin1,INPUT);
 pinMode(buttonpin2,INPUT);
 pinMode(buttonpin3,INPUT);
 pinMode(buttonpin4,INPUT);
 pinMode(led1,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonstate1=digitalRead(buttonpin1);
  buttonstate2=digitalRead(buttonpin2);
  buttonstate3=digitalRead(buttonpin3);
  buttonstate4=digitalRead(buttonpin4);

  if(buttonstate1==HIGH && buttonstate3==HIGH)
    {
      digitalWrite(led1,HIGH);
    }
  else
    {
    digitalWrite(led1,LOW);
      digitalWrite(led2,HIGH);
    }
}