int red = A6;
int green = A5;
int blue = A7;

void setup() 
{
pinMode(red, OUTPUT);
pinMode(green, OUTPUT);
pinMode(blue, OUTPUT);
}


void loop() 
{
 digitalWrite(red, HIGH);
delay(500);
digitalWrite(red, LOW);
delay(500);
digitalWrite(green, HIGH);
delay(500);
digitalWrite(green, LOW);
delay(500);
digitalWrite(blue, HIGH);
delay(500);
digitalWrite(blue, LOW);
delay(500);
}
