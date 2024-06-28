const int trigpin=9;
const int echopin=10;
const int buzzerPin=4;
float duration,distance;

void setup() {
  // put your setup code here, to run once:
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  Serial.begin(9600);
  pinMode(buzzerPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);

  duration=pulseIn(echopin,HIGH);
  distance=(duration*.0343)/2;
  Serial.print("Distance");
  Serial.println(distance);
  delay(5000);
  
  if(distance>=200)
    {
      tone(buzzerPin,1000);
      delay(1000);
    }
  else
    {
      noTone(buzzerPin);
      delay(1000);

    }

}
