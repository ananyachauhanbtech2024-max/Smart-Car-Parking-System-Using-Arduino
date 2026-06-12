#include <LiquidCrystal_I2C.h>
#include <Servo.h>

LiquidCrystal_I2C lcd(0x27,16,2);
Servo myservo;

int IR1 = 2;
int IR2 = 3;

int totalSlots = 3;
int Slot = 3;

bool carEntered = false;
bool carExited = false;

void setup()
{
  lcd.init();
  lcd.backlight();

  pinMode(IR1, INPUT);
  pinMode(IR2, INPUT);

  myservo.attach(4);
  myservo.write(100); // Gate Closed

  lcd.setCursor(0,0);
  lcd.print("SMART PARKING");

  lcd.setCursor(0,1);
  lcd.print("SYSTEM");

  delay(2000);
  lcd.clear();
}
