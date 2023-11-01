int ledPin = 13; //for LED
int buzzerPin = 11; //for Buzzer
int pirPin = 2; //PIR Out pin
int pirStat = 0; //PIR status

void setup() 
{
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(pirPin, INPUT);
  Serial.begin(9600);
}

void loop() 
{
  pirStat = digitalRead(pirPin);
  if (pirStat == HIGH) 
  { //if motion detected
    digitalWrite(ledPin, HIGH); //turn LED ON
    digitalWrite(buzzerPin, HIGH); //Buzzer ON
    Serial.println("Motion Detected");
  }
  else 
  {
    digitalWrite(ledPin, LOW); //turn LED OFF if we have no motion
    digitalWrite(buzzerPin, LOW); //turn Buzzer OFF if we have no motion
    
  }
}


