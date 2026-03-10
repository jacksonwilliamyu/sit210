int button = 2;
int porchLed = 5; // Red Led
int hallwayLed = 6; // Green Led

void setup() 
{
  pinMode(button, INPUT_PULLUP);
  pinMode(porchLed, OUTPUT);
  pinMode(hallwayLed, OUTPUT);
}

void loop() 
{
  if (buttonPressed()) 
  {
    lightsOn();
    lightTimeController();
  }
}

bool buttonPressed() 
{
  return digitalRead(button) == LOW;
}

void lightsOn() 
{
  digitalWrite(porchLed, HIGH);
  digitalWrite(hallwayLed, HIGH);
}

void lightTimeController() 
{
  delay(30000);
  digitalWrite(porchLed, LOW); // keep led on for 30 seconds

  delay(30000);
  digitalWrite(hallwayLed, LOW); // keep led on for an additional 30 seconds (60 total)
}
