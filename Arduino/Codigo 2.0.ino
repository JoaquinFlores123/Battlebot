char nombre[10] = "Buldrini";
char password[10] = "1234";
char baud = '4';
char entrada;
//4,5,6,7 Motores DC Ruedas
//8,9 Motor Sierra

void motores(int l);

void setup() {
  Serial.begin(9600);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  if(Serial.available()>=1){
    entrada = Serial.read();
    motores(entrada);
   }
}

void motores(int l){
  if (l=='F'){
    digitalWrite(7, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(4, LOW);
  }
  else if (l=='B'){
    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(4, HIGH);
  }
  else if (l=='C'){
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(4, LOW);
  }
  else if (l=='A'){
    digitalWrite(7, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
  }
  else if (l=='E'){
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, HIGH);
  }
  else if (l=='D'){
    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
  }
  else if (l=='S'){
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
  }
  else if (l=='X'){
    digitalWrite(8, HIGH);
    digitalWrite(9,LOW);
  }
  else if (l=='Z'){
    digitalWrite(8, LOW);
    digitalWrite(9,HIGH);
  }
  else if (l=='Y'){
    digitalWrite(8, LOW);
    digitalWrite(9,LOW);
}
