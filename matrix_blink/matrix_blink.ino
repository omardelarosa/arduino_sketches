const int analogInPin = A0;

const int pins_a[4] = {
  4,5,3,2 };
  
const int pins_b[4] = {
  6,7,8,9 };
  
int sensorValue = 0;

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600); 
  for (int thisPin = 0; thisPin < 4; thisPin++) {
    pinMode(pins_a[thisPin], OUTPUT);
  }
   for (int thisPin = 0; thisPin < 4; thisPin++) {
    pinMode(pins_b[thisPin], OUTPUT);
  }
}

int checkSensor(){
 sensorValue = analogRead(analogInPin);
// Serial.print("sensor = " );                       
// Serial.print(sensorValue); 
 return sensorValue;
}

int getDelay(){
// 250 ms = 1 eighth note at 120 bpm
  return checkSensor()/4;
}


void loop(){
 
 
 for (int thisPin = 0; thisPin < 4; thisPin++) {
    digitalWrite(pins_a[thisPin], HIGH);
    delay(getDelay());
    digitalWrite(pins_a[thisPin], LOW);
    delay(getDelay()); 
//    checkSensor();
  }
  for (int thisPin = 0; thisPin < 4; thisPin++) {
    digitalWrite(pins_b[thisPin], HIGH);
    delay(getDelay());
    digitalWrite(pins_b[thisPin], LOW);
    delay(getDelay()); 
//    checkSensor();
  }
}
