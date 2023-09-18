---
sort: 7
---
# Adding RGB LEDs to controllers
You can add LEDs that will light up when a button or analogue input is pressed. For people playing Clone Hero, you can also make the frets light up based on in-game events such as Star Power.
## You will need
* A guitar modded using the [following guide](https://santroller.tangentmc.net/wiring_guides/guitar.html)
* Some APA102s (or Dotstar or SK9822 or APA107 or HD107s as these are all compatible / clones of the APA102)
  * Note that if your using JLCPCB, the SK9822 is often available when the APA102 is not.

## The finished product
{% include youtube.html id=H73McH5abes %}

## Steps
1. Connect the VCC and GND pins on all LEDs that are being used to the Arduino.
2. Connect the SCK (CI) and MOSI (DI) on the first LED to the SCK and MOSI pins on your Arduino. Then chain the SCK (CO) and MOSI (DO) outputs to the inputs on the next LED, until all LEDs are connected.
   If you are using a pi pico, you can choose pins using the configuration tool, as only specific groups of pins work.
      
   | Microcontroller | SCK (CI) | MOSI (DI) |
   | --- | --- | --- | --- | --- |
   | Pro Micro, Leonardo, Micro | 15 | 16 |
   | Uno, Pro Mini | 13 | 11 |
   | Mega | 52 | 51 | 
