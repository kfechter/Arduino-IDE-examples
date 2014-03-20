/*
  Serial Loopback Test
 
  Reads all bytes on the serial input and sends them right
  back to the sender.

  This example code is in the public domain.
 */

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(57600);
  // this makes it so that the arduino read function returns
  // immediatly if there are no less bytes than asked for.
  Serial.setTimeout(0);
}

// the loop routine runs over and over again forever:
void loop() {
  char buffer[64];
  size_t length = 64; 
  length = Serial.readBytes(buffer, length);
  Serial.write((uint8_t*)buffer, length);
}



