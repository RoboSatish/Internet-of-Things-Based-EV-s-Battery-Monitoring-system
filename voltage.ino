

#include <LiquidCrystal.h>  

int Read_Voltage  = A3;

int Read_Current  = A4;

const int rs = 3, en = 4, d4 = 8, d5 = 9, d6 = 10, d7 = 11; 
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {

  lcd.begin(16, 2); 


  lcd.print(" Arduino Watt-meter"); 

  lcd.setCursor(0, 1);

  lcd.print("  By-Satish "); 

  delay(2000);

  lcd.clear();
}
void loop() {
float Voltage_Value = analogRead(Read_Voltage);
float Current_Value = analogRead(Read_Current);
Voltage_Value = Voltage_Value * (5.0/1023.0) * 6.46;
Current_Value = Current_Value * (5.0/1023.0) * 0.239;
lcd.setCursor(0, 0);
lcd.print("V="); lcd.print(Voltage_Value); 
lcd.print("  "); 
lcd.print("I=");lcd.print(Current_Value); 
float Power_Value = Voltage_Value * Current_Value;
lcd.setCursor(0, 1);
lcd.print("Power="); lcd.print(Power_Value); 
delay(200);

}

