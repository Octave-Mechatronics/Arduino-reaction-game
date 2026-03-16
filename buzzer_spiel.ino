int redPin = 9;
int yellowPin = 10;
int greenPin = 11;
int wPin1 = 8;
int wPin2 = 12;
int butt1 = 6;
int butt2 = 13;
int buzzer = 7;
bool buttPressed = 0;

void setup() {
  pinMode(wPin1, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(wPin2, OUTPUT);
  
  pinMode(butt1, INPUT_PULLUP);
  pinMode(butt2, INPUT_PULLUP);
 
  pinMode(buzzer, OUTPUT);

  randomSeed(analogRead(A0));
  

}

void loop() {
  digitalWrite(greenPin, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(100);
  digitalWrite(buzzer, LOW);
  delay(900);
  digitalWrite(greenPin, LOW);
  
  digitalWrite(yellowPin, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(100);
  digitalWrite(buzzer, LOW);
  delay(900);
  digitalWrite(yellowPin, LOW);
  
  digitalWrite(redPin, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(100);
  digitalWrite(buzzer, LOW);
  delay(random(900, 4901));
  digitalWrite(redPin, LOW);

  
  
  while(buttPressed == 0){
    digitalWrite(wPin1, HIGH);
    digitalWrite(wPin2, HIGH);
    if(digitalRead(butt1) == 0){
      buttPressed = 1;
      digitalWrite(wPin2, LOW);
    }
    else if(digitalRead(butt2) == 0){
      buttPressed = 1;
      digitalWrite(wPin1, LOW);
    }

  }
  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer, LOW);
  delay(1500);
  digitalWrite(wPin1, LOW);
  digitalWrite(wPin2, LOW);
  buttPressed = 0;
  

}
