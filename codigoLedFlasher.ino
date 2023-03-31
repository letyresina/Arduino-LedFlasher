
int luz = 13;

void setup() {
  pinMode(luz, OUTPUT);
}

void loop() {
  digitalWrite(luz,0);
  delay(500);
  digitalWrite(luz,1);
  delay(500);
}
