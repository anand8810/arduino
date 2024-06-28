const int tempSensorPin =A0;
const int buzzerPin=4;
const float temperatureThreshold =25.0;

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

  if(temperature>temperatureThreshold)
    {
      digitalWrite(buzzerPin,HIGH);
    }
  else
    {
      digitalWrite(buzzerPin,LOW);
    }
  
  

}
