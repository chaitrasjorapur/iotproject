int ir_sensor = 42;
void setup() {
  pinMode(ir_sensor,INPUT);

  // put your setup code here, to run once:

}


void loop() {
  int data = analogRead(ir_sensor);
  Serial.println(data);
  if(data==LOW)
  {
    digitalWrite(42,HIGH);
    Serial.println("led is on");
  }
  else
  {
    digitalWrite(42,LOW);
    Serial.println("led is off");
  }

  // put your main code here, to run repeatedly:

}
