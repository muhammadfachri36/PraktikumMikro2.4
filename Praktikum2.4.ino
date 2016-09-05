void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  digitalWrite(A0, HIGH);
  pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(A0)==LOW){
      digitalWrite(12, HIGH);
    }
    else{
         digitalWrite(12, LOW);
    }
}
