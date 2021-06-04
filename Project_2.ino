#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,6,5,4,3);

byte arrow[8]={
  0b11100,
  0b11100,
  0b11100,
  0b11100,
  0b11100,
  0b11100,
  0b11100,
  0b11100
};
void setup() {
  


   lcd.begin(16,2); 
   lcd.print("MESSAGE LOADING");
   delay(500);
   lcd.clear();

}

void loop() {
lcd.createChar(2,arrow);
for(int i=15; i>=-25; i--){
  lcd.setCursor(i,0);
  lcd.print("THIS IS A SCROLLING MESSAGE");
   delay(100);
  lcd.clear();
//Loading Arrows
lcd.begin(16,2);
lcd.setCursor(0,1);
lcd.write(2);
delay(20);
lcd.write(2);
delay(20);
lcd.write(2);
delay(20);
lcd.write(2);
delay(20);
lcd.write(2);
delay(20);
lcd.write(2);
delay(20);
lcd.write(2);
delay(20);
lcd.write(2);
delay(20);
lcd.write(2);
delay(20);
lcd.write(2);
delay(20);
lcd.write(2);
delay(20);
lcd.write(2);
delay(20);
lcd.write(2);
delay(20);
lcd.write(2);
delay(20);
lcd.write(2);
delay(20);
lcd.write(2);
delay(20);
lcd.write(2);
delay(20);
delay(300);
lcd.clear();
i=i-2;
  
}
}
