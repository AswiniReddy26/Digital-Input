int state;
void setup() {
  // put your setup code here, to run once:
pinMode(D0,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int state;
state=digitalRead(D0);
Serial.println(state);
delay(500);
}
