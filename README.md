# Reverse cark parking sensor
 - Mihar Kathiriya.

```                                                               ARDUINO : Reverse Car parking Sensor                                                                         ```
 
 -This Project is one of the useful device used in the world, A parking sensor for all the drivers out there who keep denting their car while parking it in reverse.
 
 -I have modified the code I saw on the internet by Dejan Nedelkovski. 
 
 -I have added a LCD screen, LED and a peizospeaker to this device, which could also help any impaired driver by making high pitch sound and flashing the LED.
 
 -This code uses the library liquidcrystal.h which is used for displaying our message on our 16x2 LCD dislpay.
 
 -Here is my code, and a picture of my Arduino project irl.
 

![WhatsApp Image 2021-04-14 at 8 48 12 PM](https://user-images.githubusercontent.com/60302630/114807001-df154100-9d62-11eb-930d-26900fb40dab.jpeg)

# Repository Contents:

# Hardware/Material used:

  1. Arduino uno. 
  2. Breadboard.
  3. Jumper Wires.
  4. 560 Ohm Resistor.
  5. Red led.
  6. Ultrasonic sensor. 
  7. Piezo speaker.
  8. Lcd screen.
  9. Potentiometer.
 
# Build:

Here is my schematic diagram of the device I made via fritzing.
![hardware](https://user-images.githubusercontent.com/60302630/114806286-bb053000-9d61-11eb-8567-504660b5b376.jpg)

(the resistor used in here is 220 ohm where as i used 560 ohm, beacuse i couldn't find it in the fritizing)

This, build follows these connections:

  1. Gather the materials required for building the circuit.
  2. Starting with the LCD display, take 16*2 LCD display and fit it at the end of the breadboard.
  3. Same with the potentiometer, place it near the LCD display.
     -follow this connections, from pin 1 to pin 16.
     
      pin 1 -> Arduino GND
     
      pin 2 -> Arduino 5V
      
      pin 3 -> Middle pin of potentiometer
      
      pin 4 -> Arduino pin 12
      
      pin 5 -> Arduino GND
      
      pin 6 -> Arduino pin 11
      
      pin 11 -> Arduino pin 5
      
      pin 12 -> Arduino pin 4
      
      pin 13 -> Arduino pin 3
      
      pin 14 -> Arduino pin 2
      
      pin 15 -> Arduino 5v
      
      pin 16 -> Arduino GND
      
  4. Connect the rest two pins of he potentiometer to 5V and GND.
  5. With the successfully connected LCD display, we will add a red LED and a peizo speaker.
  6. Take a red LED and a 560ohm resistor, place the resistor to one side of the LED and wire it to Arduino pin 7. The otherside will be pinned to ground.
  7. After this, we will connect peizo speaker. For this, plug the negative side of the speaker to ground and other side to Arduino pin 6.
  8. For the connection of the Ultrasonic sensor, we will do the following connections,
      VCC -> Arduino 5v
      GND -> Arduino GND
      TRIG -> Arduino pin 9
      ECHO -> Arduino pin 10
  9. We have successfully build our circuit and it's ready to test.


 
 
