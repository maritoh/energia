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
}

void analog_read(){
  // read the input on analog pin A3:
  int sensorValue = analogRead(A3);
  // print out the value you read:
  Serial.println(sensorValue);
  delay(1); // delay in between reads for stability 
}
