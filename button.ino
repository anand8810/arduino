int led4=4;
int buttonpin=5;
int buttonstate=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(buttonpin,INPUT);
  pinMode(led4,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonstate=digitalRead(buttonpin);
  if(buttonstate==HIGH)
    {
      digitalWrite(led4,HIGH);
     
    }
  else
    {
      digitalWrite(led4,LOW);
      
    }

}
