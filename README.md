# Fire-Alarm
A cost-effective and reliable fire detection system built with Arduino, IR flame sensor, and buzzer. This project monitors fire hazards and triggers real-time alerts via a buzzer when fire is detected. Designed for easy deployment in residential or commercial environments, this solution emphasizes early detection, safety, and rapid response.

# Fire Detection System Using Arduino

A cost-effective, efficient, and user-friendly fire detection system developed using Arduino, IR flame sensor, and a buzzer. Designed for early fire hazard detection, the system alerts users in real-time, ensuring quick response and improved safety in both residential and commercial spaces.

---

##  Features

- 🔍 Real-time fire detection using IR flame sensor  
- 🔔 Immediate alert via buzzer  
- 🧠 Simple logic and efficient design  
- 🧩 Easy to install and scalable  
- 💡 Ideal for homes, offices, and small industries

---

## 🔧 Components Used

- Arduino UNO (or compatible board)  
- IR Flame Sensor  
- Buzzer  
- Jumper wires  
- Breadboard (optional)  
- 5V regulated power supply

---

## 🔌 Circuit Connection

| Component     | Arduino Pin |
|---------------|-------------|
| IR Flame Sensor VCC | 5V          |
| IR Flame Sensor GND | GND         |
| IR Flame Sensor DO  | D8          |
| Buzzer +            | D9          |
| Buzzer –            | GND         |

> Ensure all components share a common GND.

---

## 🧾 Arduino Code

```cpp
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
```
