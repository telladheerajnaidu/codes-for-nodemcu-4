const int buzzer1 =  4;
const int buzzer2 =  0;

void setup() {
  pinMode(buzzer1, OUTPUT);
  pinMode(buzzer2, OUTPUT);
  pinMode(13, OUTPUT);
       
}

void loop(){
  digitalWrite(buzzer1, HIGH);
  delay(200);
  digitalWrite(buzzer2, LOW);
  delay(200);
  digitalWrite(buzzer1, LOW);
  delay(200);
  digitalWrite(buzzer2, HIGH);
  delay(200);  
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}
