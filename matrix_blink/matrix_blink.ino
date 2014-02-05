const int pins[4] = {
  4,5,3,2 };

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600); 
  for (int thisPin = 0; thisPin < 4; thisPin++) {
    pinMode(pins[thisPin], OUTPUT);
  }
}

void loop(){
 for (int thisPin = 0; thisPin < 4; thisPin++) {
    digitalWrite(pins[thisPin], HIGH);
    delay(200);
    digitalWrite(pins[thisPin], LOW);
    delay(200); 
  }
}
