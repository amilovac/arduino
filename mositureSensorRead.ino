/*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogReadSerial
*/
int sensorPin = A0;
int sensorValue = 0;
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  
  sensorValue = analogRead(sensorPin);
  Serial.print(sensorValue);
  Serial.print("  ");
//235 je maksimum vlaznosti a 990 je  maksimalno suvo!
  sensorValue = map (sensorValue, 235, 990, 100,0);
  Serial.println(sensorValue);
  delay(1000);        // delay in between reads for stability
}