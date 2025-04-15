const int buzzerPin = 9;
const int fireSensorPin = 8;

void setup()
{
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);
  pinMode(fireSensorPin, INPUT);
  Serial.println("System initialized. Monitoring for fire...");
}

void loop()
{
  int fireValue = digitalRead(fireSensorPin);
  
  Serial.print("Fire sensor value: ");
  Serial.println(fireValue);

  if(fireValue == 0)
  {
    Serial.println("Fire detected! Activating buzzer...");
    digitalWrite(buzzerPin, HIGH);
    delay(5000);
  }
  else
  {
    Serial.println("No fire detected.");
    digitalWrite(buzzerPin, LOW);
  }

  delay(500);
}
