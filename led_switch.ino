const byte LEDs[] =
{3,4,5,13,7,8,9,10};
const byte SW=6;
const byte total = sizeof(LEDs);
int index = 0;
int a=0;
int j=0;
void setup(){
// 將每個 Pin 設定成輸出
for (byte i=0;i<total;i++) {
pinMode(LEDs[i], OUTPUT);
pinMode(SW,INPUT);
}
}
void loop() {
boolean val = digitalRead(6);
if(val){
   // 所有 LED OFF
for(j=0;j<=1;j++)
{
  for(index=0;index<=7;index++)
  {
  digitalWrite(LEDs[index],HIGH);
  }
  delay(100);
  for(index=0;index<=7;index++)
  {
  digitalWrite(LEDs[index],LOW);
  }
  delay(100);
  }



for(index=0; index <= 7; index++)
//向左展示
{ // 所有 LED OFF
for(byte i=0;i<total;i++) 
{
digitalWrite(LEDs[i], LOW);
}
// 點亮 index 位置之 LED
digitalWrite(LEDs[index], HIGH);
delay(100);
}

for(j=0;j<=1;j++)
{
  for(index=0;index<=7;index++)
  {
  digitalWrite(LEDs[index],HIGH);
  }
  delay(100);
  for(index=0;index<=7;index++)
  {
  digitalWrite(LEDs[index],LOW);
  }
  delay(100);
  }

for (index=7; index >= 0; index--)
{ 
for (byte i=0;i<total;i++) 
{
digitalWrite(LEDs[i], LOW);
}
// 點亮 index 位置之 LED
digitalWrite(LEDs[index], HIGH);
delay(100);
}
}
else {
  for (byte i=0;i<total;i++) 
{
digitalWrite(LEDs[i], LOW);
}
}


}
