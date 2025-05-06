# Ultrasonic Sensor
Using an Arduino UNO to power an HC-SR04 ultrasonic sensor. The sensor
detects objects between 3 and 30 centimeters away from the unit.

**Watch on YouTube**

[![Watch on YouTube](https://i.postimg.cc/9QjmcYpz/ultrasonic-sensor.jpg)](https://youtu.be/FZKNIyYRCzc)

## Code
1. **Read Distance**
```c++
long dist = sr04.Distance();
```

2. **Filter by range**
```c++
if (dist >= 3 && dist <= 30) {...}
```

3. **Report or act only when in range**
   
Terminal output should be:
```terminaloutput
[-] No current detection...    // Nothing in range.
[-] No current detection...
[-] No current detection...
11cm                           // Object within 11cm.
9cm                            // Object within 9cm.
```