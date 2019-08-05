void setup() {
  Serial.begin(9600); // open serial port, set the baud rate as 9600 bps
  pinMode(12, OUTPUT);
}
void loop() {
  int val;
  val = analogRead(0); //connect sensor to Analog 0
  Serial.println(val); //print the value to serial port
  delay(1000);
  if (val <= 300){
    digitalWrite(12, HIGH);   // turn the LED on (HIGH is the voltage level)
    Serial.print("Moisture Low");
  }
  else {
    digitalWrite(12, LOW);    // turn the LED off by making the voltage LOW
    Serial.print("Moisture High");
  }
}
