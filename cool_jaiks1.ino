int ledVermelhoC = 3;
int ledAmareloC = 2;
int ledVerdeC = 1;
int ledVermelhoP = 7;
int ledVerdeP = 8;
int botao = 10;

void setup() {
  pinMode(botao, INPUT_PULLUP);
  pinMode(ledVermelhoC, OUTPUT);
  pinMode(ledAmareloC, OUTPUT);
  pinMode(ledVerdeC, OUTPUT);
  pinMode(ledVermelhoP, OUTPUT);
  pinMode(ledVerdeP, OUTPUT);
}

void loop() {
  
    digitalWrite(ledVermelhoP, HIGH);
    digitalWrite(ledVerdeC, HIGH);
    delay(2000);
    
    digitalWrite(ledVerdeC, LOW);
    digitalWrite(ledAmareloC, HIGH);
    delay(2000);
    
    digitalWrite(ledAmareloC, LOW);
    digitalWrite(ledVermelhoC, HIGH);
    digitalWrite(ledVermelhoP, LOW);
    digitalWrite(ledVerdeP, HIGH);
  	delay(2000);
  
  	digitalWrite(ledVermelhoC, LOW);
    digitalWrite(ledVerdeP, LOW);
 
  } 