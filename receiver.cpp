const int AirValue = 620;   //you need to replace this value with Value_1
const int WaterValue = 310;  //you need to replace this value with Value_2
int soilMoistureValue = 0;
int soilmoisturepercent=0;

int soilMoistureValue2 = 0;
int soilmoisturepercent2=0;
void setup() {
  Serial.begin(9600); // open serial port, set the baud rate to 9600 bps
}
void loop() {
soilMoistureValue = analogRead(A6);  //put Sensor insert into soil
Serial.println(soilMoistureValue);
soilmoisturepercent = map(soilMoistureValue, AirValue, WaterValue, 0, 100);
if(soilmoisturepercent >= 100)
{
  Serial.println("100 %");
}
else if(soilmoisturepercent <=0)
{
  Serial.println("0 %");
}
else if(soilmoisturepercent >0 && soilmoisturepercent < 100)
{
  Serial.print(soilmoisturepercent);
  Serial.println("%  V1.2");
  
}
  delay(2000); 

soilMoistureValue2 = analogRead(A4);  //put Sensor insert into soil
Serial.println(soilMoistureValue2);
soilmoisturepercent2 = map(soilMoistureValue2, AirValue, WaterValue, 0, 100);
if(soilmoisturepercent2 >= 100)
{
  Serial.println("100 %");
}
else if(soilmoisturepercent2 <=0)
{
  Serial.println("0 %");
}
else if(soilmoisturepercent2 >0 && soilmoisturepercent2 < 100)
{
  Serial.print(soilmoisturepercent2);
  Serial.println("% TZT");
  
}
  delay(2000);
}  