int led = 6;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  int CDS = analogRead(A0);
  Serial.println(CDS);
  if (CDS > 10){
    digitalWrite(led, LOW);
  }
  else {
    digitalWrite(led, HIGH);
  }
}
