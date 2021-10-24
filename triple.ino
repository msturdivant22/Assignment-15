// Maurice says hi
// Adam forked you hard
//Josh was here

int inpin = 8;
int outpin1 = 7;
int outpin2 = 10;
int outpin3 = 9;
void setup() {
  // put your setup code here, to run once:
  pinMode(inpin, INPUT);
  pinMode(outpin1, OUTPUT);
  pinMode(outpin2, OUTPUT);
  pinMode(outpin3, OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(inpin) == HIGH) {
    digitalWrite(outpin1, HIGH); // sets the digital pin 13 on
    delay(200);            // waits for a second
    digitalWrite(outpin1, LOW);  // sets the digital pin 13 off
     
    digitalWrite(outpin2, HIGH); // sets the digital pin 13 on
    delay(200);            // waits for a second
    digitalWrite(outpin2, LOW);  // sets the digital pin 13 off
     
    digitalWrite(outpin3, HIGH); // sets the digital pin 13 on
    delay(200);            // waits for a second
    digitalWrite(outpin3, LOW);  // sets the digital pin 13 off
    
  } else {
    digitalWrite(outpin1, LOW);
    digitalWrite(outpin2, LOW);
    digitalWrite(outpin3, LOW);
  }
}
