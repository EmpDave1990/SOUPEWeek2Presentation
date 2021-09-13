// these ints are what pin they're using on the arduino
int green = 9; 
int yellow = 11; 
int red = 13; 
int motor = 2;
int button = 3;

void setup()
{
// sets the pins' mode to either input or output
pinMode(button, INPUT);
pinMode(green, OUTPUT); 
pinMode(yellow, OUTPUT);
pinMode(red, OUTPUT);
pinMode(motor, OUTPUT);
}


void loop()
{
int buttonState = digitalRead(button); // the int is assigned to read the state
  									   // of the int "button", which is pin 3
// Serial.println(buttonState); // we don't need this
delay(1);

delay(1);
if(buttonState == 1) { // if the button is pressed
  delay(20);
  digitalWrite(green, LOW); //turn off green light
  digitalWrite(motor, LOW); //turn off motor
  delay(100); 
  digitalWrite(yellow, HIGH); // turn on yellow light
  delay(3000); 
  digitalWrite(yellow, LOW); // turn off yellow light
  delay(100);
  digitalWrite(red, HIGH); // turn on red light
  delay(6000); 
  digitalWrite(red, LOW); // turn off red light
  delay(100); 
}
else { // if the button isn't pressed
  digitalWrite(green, HIGH); //turn green light back on
  delay(1000);
  digitalWrite(motor, HIGH); // turn motor back on
  delay(200);
}
}