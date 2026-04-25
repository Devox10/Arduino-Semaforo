// Dichiarazione variabili led

int ledrosso = 13;
int ledverde = 12;
int ledgiallo = 11;

// Dichiarazione variabili tempo

int time1 = 5000;
int time2 = 2000;

// Setup

void setup() {

  pinMode(ledrosso, OUTPUT);
  pinMode(ledverde, OUTPUT);
  pinMode(ledgiallo, OUTPUT);

}

// Ciclo

void loop() {

  // Rosso acceso
  
  digitalWrite(ledverde, LOW);
  digitalWrite(ledgiallo, LOW);

  digitalWrite(ledrosso, HIGH);

  delay(time1);

  // Verde acceso

  digitalWrite(ledrosso, LOW);
  digitalWrite(ledgiallo, LOW);

  digitalWrite(ledverde, HIGH);

  delay(time1);

  // Giallo acceso

  digitalWrite(ledrosso, LOW);
  digitalWrite(ledverde, LOW);

  digitalWrite(ledgiallo, HIGH);

  delay(time2);

}