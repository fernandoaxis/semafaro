int ledVermelhoC = 3;
int ledAmareloC = 2;
int ledVerdeC = 1;
int ledVermelhoP = 7;
int ledVerdeP = 8;
bool botao = false;
int botao1 = 10;

void setup() {
  pinMode(botao1, INPUT_PULLUP);
  pinMode(ledVermelhoC, OUTPUT);
  pinMode(ledAmareloC, OUTPUT);
  pinMode(ledVerdeC, OUTPUT);
  pinMode(ledVermelhoP, OUTPUT);
  pinMode(ledVerdeP, OUTPUT);
}

void loop() {
  	
  if((botao == false) && (digitalRead(botao1) == LOW)){
    botao = true;
   
 
  }else if((botao == true) && (digitalRead(botao1) == LOW)){
  	botao = false;
  }
  
  if(botao == true){
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
    
  }else{
  	digitalWrite(ledVermelhoC, LOW);
    digitalWrite(ledAmareloC, LOW);
  	digitalWrite(ledVerdeC, LOW);
  	digitalWrite(ledVermelhoP, LOW);
  	digitalWrite(ledVerdeP, LOW);
    }
  }
