# 1.3" OLED Happy New Month Display (SH1106)

A simple but clean Arduino project to display a "Happy New Month" greeting and social handle on a 1.3-inch I2C OLED display.

## The Challenge
This project was a great lesson in hardware drivers. While many 0.96" OLEDs use the `SSD1306` driver, the 1.3" version often uses the `SH1106`. Using the wrong library results in a screen full of "static" or snow. Switching to the `Adafruit_SH110X` library resolved the issue!

## Wiring (Arduino Uno)
| OLED Pin | Arduino Pin |
| :--- | :--- |
| **VDD** | 5V |
| **GND** | GND |
| **SCK (SCL)** | A5 |
| **SDA** | A4 |

## How to Run
1. Install the `Adafruit SH110X` and `Adafruit GFX` libraries in the Arduino IDE.
2. Connect your OLED as shown in the wiring table.
3. Upload the `.ino` sketch.

## Result
![Project Result](assets/wiring-photo.jpg)

---
Built by [@emekabuilds_](https://x.com/emekabuilds_)
