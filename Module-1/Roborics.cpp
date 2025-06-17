#include <bits/stdc++.h>
using namespace std;
int main()
{
    const int mqPin = 'A0';
const int buzzer = 7;
const int relay = 8;
int sensorValue;

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(relay, OUTPUT);
  Serial.begin(9600);
  digitalWrite(relay, HIGH);  // প্রথমে রিলে চালু থাকবে (Ignition ON)
  digitalWrite(buzzer, LOW);  // বুজার বন্ধ থাকবে
}

void loop() {
  sensorValue = analogRead(mqPin);
  Serial.print("Sensor Value: ");
  Serial.println(sensorValue);

  if (sensorValue > 350) {        // অ্যালকোহল ডিটেকশন থ্রেশহোল্ড
    digitalWrite(buzzer, HIGH);   // বুজার চালু
    digitalWrite(relay, LOW);     // রিলে বন্ধ (Ignition OFF)
  } else {
    digitalWrite(buzzer, LOW);    // বুজার বন্ধ
    digitalWrite(relay, HIGH);    // রিলে চালু (Ignition ON)
  }

  delay(500);
}

    return 0;
}
