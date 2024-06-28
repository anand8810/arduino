int led1=1;
int led2=2;
int led3=3;
const int tempSensorPin =A0;
const int buzzerPin=4;
const float temperatureThreshold1 =0.0;
const float temperatureThreshold2 =6.0;
const float temperatureThreshold =9.0;

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);
  pinMode(buzzerPin,OUTPUT);
  digitalWrite(buzzerPin,LOW);
  
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue=analogRead(tempSensorPin);

  float temperature=sensorValue*(3.0/1023.0)*10;
  Serial.print("Temperature:");
  Serial.print(temperature);
  Serial.println(" *C");

  if(temperature<temperatureThreshold1)
    {
      digitalWrite(led1,HIGH);
    }

   else if(temperature==temperatureThreshold2)
    {
      digitalWrite(led2,HIGH);
    }

   else if(temperature>temperatureThreshold)
    {
      digitalWrite(buzzerPin,HIGH);
      digitalWrite(led3,HIGH);
    }
  else
    {
      digitalWrite(buzzerPin,LOW);
    }
  
  

}
