#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SH110X.h>

#define i2c_Address 0x3c 
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SH1106G display = Adafruit_SH1106G(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  delay(250); 
  display.begin(i2c_Address, true); 
  
  display.clearDisplay();
  display.setTextColor(SH110X_WHITE);

  // --- BIG TOP TEXT ---
  display.setTextSize(2);      // Size 2 is much more readable on the 1.3"
  display.setCursor(30, 7);    // Centering "HAPPY"
  display.println("HAPPY");

  display.setCursor(10, 25);   // Centering "NEW MONTH"
  display.println("NEW MONTH");

  // --- CLEAN DIVIDER ---
  // A thicker line looks better with the bigger font
  display.drawFastHLine(10, 45, 108, SH110X_WHITE); 

  // --- MY HANDLE ---
  display.setTextSize(1);      // this keeps the handle smaller for a professional look
  display.setCursor(25, 52);
  display.print("@emekabuilds_");
  
  display.display();
}

void loop() {
  // Static display
}
