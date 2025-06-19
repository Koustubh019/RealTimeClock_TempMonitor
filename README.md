# RealTimeClock_TempMonitor
"IIoT Project: Real-time clock and temperature monitoring using Arduino"

## 🎯 Aim
Design and simulate a real-time temperature and clock monitoring system using Arduino. The system displays time and temperature on an LCD and sounds a buzzer if temperature exceeds a predefined limit.

---

## 📌 Problem Statement
Industries need to continuously monitor temperature for safety and control. This project simulates such a system using an Arduino UNO, RTC, DHT22 sensor, LCD, and buzzer.

---

## 🚀 Scope
- Real-time temperature monitoring
- Clock display using DS1307 RTC
- Buzzer alert on over-temperature
- Simulated using Wokwi

---

## 🧰 Components Used

| Component     | Description                    |
|---------------|--------------------------------|
| Arduino UNO   | Microcontroller Board          |
| DHT22         | Temperature sensor             |
| DS1307        | RTC module                     |
| LCD (16x2 I2C)| For displaying data            |
| Buzzer        | Audio alert system             |
| Wokwi         | Online simulator               |

---

## 🔁 Code Flowchart

![Flowchart](Flowchart.png)
![code flow chart](https://github.com/user-attachments/assets/8a71ccdb-c109-48dd-bded-9203644ef19f)


---

## 🔌 Circuit Diagram

![Circuit](Circuit.png)
![Screenshot 2025-06-19 164149](https://github.com/user-attachments/assets/62ca0365-35ba-4322-b3d0-e47b7ee7f1e5)


---

## 🧪 Try the Simulation on Wokwi

🔗 [Wokwi Simulation Link](#) 
https://wokwi.com/projects/434186096797029377

---

## ⚙️ How to Run

1. Open the `.ino` file in Arduino IDE or Wokwi
2. Connect the components as shown
3. Start simulation
4. Click the DHT22 sensor to set temperature
5. If temperature > threshold, buzzer turns ON


