---
sort: 14
---

# Setting up emulation of a PS2 controller

## Supplies

- A controller built using one of the other guides

- A microcontroller

  - The Pi Pico is recommended, but other 3.3v microcontrollers like the 3.3v pro micro may work. 5v only microcontrollers will NOT work.

- A PS2 controller plug
- Some Wire
- A Soldering Iron

```danger
NEVER plug in both the usb cable to your computer, and the PS2, it can only ever be plugged into one device at a time!
```

## Steps

1. Connect pins according to the below table.

   For beginners we provide a recommended pinout below for each microcontroller.
   If these pins don't work for you, you can use one of the advanced pinouts below. Note that the Pi Pico has multiple channels, and SCK, MOSI and MISO need to be from the same channel.

   [![Adapter pinout](/assets/images/ps2-pinout.png)](/assets/images/ps2-pinout.png)

   | Microcontroller                          | SCK / Clock / Blue | MOSI / Command / Orange | MISO / Data / Brown | Acknowledge / Green | Attention / Yellow |
   | ---------------------------------------- | ------------------ | ----------------------- | ------------------- | ------------------- | ------------------ |
   | Pi Pico (Recommended)                    | GP6                | GP4                     | GP3                 | GP7                 | GP10               |
   | Pro Micro, Leonardo, Micro (Recommended) | 15                 | 16                      | 14                  | 7                   | 10                 |
   | Uno (Recommended)                        | 13                 | 11                      | 12                  | 2                   | 10                 |
   | Mega (Recommended)                       | 52                 | 51                      | 50                  | 2                   | 10                 |
   | Pi Pico (Advanced, Channel 0)            | GP2, GP6, GP18     | GP0, GP4, GP16, GP20    | GP3, GP7, GP19      | Any                 | Any                |
   | Pi Pico (Advanced, Channel 1)            | GP10, GP14, GP26   | GP8, GP12, GP28         | GP11, GP15, GP27    | Any                 | Any                |
   | Pro Micro, Leonardo, Micro (Advanced)    | 15                 | 16                      | 14                  | Any                 | Any                |
   | Uno (Advanced)                           | 13                 | 11                      | 12                  | Any                 | Any                |
   | Mega (Advanced)                          | 52                 | 51                      | 50                  | Any                 | Any                |

2. Connect the V<sub>CC</sub> on the microcontroller to the V<sub>CC</sub> on the plug
   - On the Pi Pico, use V<sub>SYS</sub>
   - On the 3.3V Pro Micro, use V<sub>CC</sub>
3. Connect the gnd pin to the gnd on your microcontroller.
4. If your plug doesn't already connect device detect to V<sub>CC</sub> inside the cable, connect device detect to V<sub>CC</sub>.

## Programming

1.  Start Santroller with your microcontroller plugged in.
2.  Hit Configure
3.  Click on `Add Setting`
4.  Find `PS2 Controller Emulation` in the dropdown and add it
5.  For the Pi Pico, set your SCK, MOSI, and MISO pins
6.  Set your Acknowledge and Attention pins