
int sensePin = 0;
int ledPin = 9;

void setup()
{
  pinMode(ledPin, OUTPUT);
  analogReference(DEFAULT); //5V Reference on UNO
  
}

void loop()
{
  int val = analogRead(sensePin);
  val = constrain(val, 750, 900);
  int ledLevel = map(val, 750, 900, 255, 0);
  analogWrite(ledPin, ledLevel);
  
}
