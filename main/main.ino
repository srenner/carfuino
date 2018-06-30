#include <defaults.h>
#include <global.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

byte fill1[8] = {
  B10000,
  B10000,
  B10000,
  B10000,
  B10000,
  B10000,
  B10000,
  B10000
};
byte fill2[8] = {
  B11000,
  B11000,
  B11000,
  B11000,
  B11000,
  B11000,
  B11000,
  B11000
};
byte fill3[8] = {
  B11100,
  B11100,
  B11100,
  B11100,
  B11100,
  B11100,
  B11100,
  B11100
};
byte fill4[8] = {
  B11110,
  B11110,
  B11110,
  B11110,
  B11110,
  B11110,
  B11110,
  B11110
};
byte fill5[8] = {
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111
};

void setup() {
  lcd.createChar(0, fill1);
  lcd.createChar(1, fill2);
  lcd.createChar(2, fill3);
  lcd.createChar(3, fill4);
  lcd.createChar(4, fill5);
}

void loop() {

}

void draw_bar(double value, int row, double minimum, double maximum) {
  lcd.setCursor(0, row);
  int bars = ((value - minimum) * 100) / (maximum - minimum);
  int fullBars = bars/5;
  int partialBars = bars % 5;
  lcd.setCursor(0, row);
  for(int i = 0; i < fullBars; i++) {
    lcd.write(byte(4));
  }
  if(partialBars > 0) {
    lcd.write(byte(partialBars - 1));    
  }
}
