#include <Arduino.h>
#include <SR04.h>

#define TRIG_PIN 12
#define ECHO_PIN 11

SR04 sr04 = SR04(ECHO_PIN, TRIG_PIN);

void setup() {
    Serial.begin(9600);
    delay(5000);    // Settle sensor.
}

void loop() {
    long dist = sr04.Distance(); // in cm.

    // Only detect when between 3 and 30 cm.
    if (dist >= 3 && dist <= 30) {
        Serial.print(dist);
        Serial.println("cm");
    } else {
        Serial.println("[-] No current detection...");
    }

    delay(3000);
}