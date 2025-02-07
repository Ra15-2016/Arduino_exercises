// C++ code
//firt project
int RED_LED_PIN = 7;
int YELLOW_LED_PIN = 4;
int GREEN_LED_PIN = 2;
int WAIT_MS = 1000;
int LONG_WAIT_MS = 5 * WAIT_MS;
int SHORT_WAIT_MS = WAIT_MS / 2;

void setup()
{
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(YELLOW_LED_PIN, OUTPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);
}

void loop()
{
  //RED LIGHT
  digitalWrite(RED_LED_PIN, HIGH);
  delay(LONG_WAIT_MS); // Wait for 5000 milliseconds
  //RED AND YELLOW LIGHT
  digitalWrite(YELLOW_LED_PIN, HIGH);
  delay(WAIT_MS); // Wait for 1000 milliseconds
  //GREEN LIGHT
  digitalWrite(YELLOW_LED_PIN, LOW);
  digitalWrite(RED_LED_PIN, LOW);
  digitalWrite(GREEN_LED_PIN, HIGH);
  delay(LONG_WAIT_MS); // Wait for 5000 milliseconds
  //FLASHING GREEN LIGHT
  for(int i = 0; i < 5; i++){
    // XOR with 1 for toggle - blinking led
  	digitalWrite(GREEN_LED_PIN, digitalRead(GREEN_LED_PIN) ^ 1);
  	delay(SHORT_WAIT_MS); //Wait for 500 milliseconds
  	
  }
  //YELLOW LIGHT
  digitalWrite(GREEN_LED_PIN, LOW);
  digitalWrite(YELLOW_LED_PIN, HIGH);
  delay(WAIT_MS); // Wait for 1000 milliseconds
  digitalWrite(YELLOW_LED_PIN, LOW);
}