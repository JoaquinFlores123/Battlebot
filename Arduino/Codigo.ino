char nombre[10] = "Sierrini";
char password[10] = "1234";
char baud = '4';

void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {
  if(Serial.available()>=1){
    char entrada = Serial.read();
    if(entrada== 'H'){
      digitalWrite(7, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(4, LOW);
    }
    else if(entrada == 'L'){
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
    }
  }
}
