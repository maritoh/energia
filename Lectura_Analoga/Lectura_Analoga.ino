int x;
void setup()
{
  // put your setup code here, to run once:
  x = 0;
  
}

void loop()
{
  // put your main code here, to run repeatedly:
  x++;
  parpadeo();
}

void parpadeo(){
  digitalWrite(RED_LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(RED_LED, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second 
}
