// C++ code
//firt project
int LED_PIN = 7;
int WAIT_MS = 1000;

void setup()
{
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_PIN, HIGH);
  delay(WAIT_MS); // Wait for 1000 millisecond(s)
  digitalWrite(LED_PIN, LOW);
  delay(WAIT_MS); // Wait for 1000 millisecond(s)
}