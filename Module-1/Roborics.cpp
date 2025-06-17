#include <bits/stdc++.h>
using namespace std;
int main()
{
    const int mqPin   = A0;
const int buzzer  = 7;
const int relay   = 8;
int sensorValue;

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(relay, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(mqPin);
  Serial.println(sensorValue);

  if (sensorValue > 350) {
    digitalWrite(buzzer, HIGH);
    digitalWrite(relay, LOW);  // ইগনিশন বন্ধ
  } else {
    digitalWrite(buzzer, LOW);
    digitalWrite(relay, HIGH); // ইগনিশন চালু
  }

  delay(500);
}

    return 0;
}
