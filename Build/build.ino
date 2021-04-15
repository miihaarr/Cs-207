/*    Name: Mihar Kathiriya.
      student id: 200442671.
      Reverse cark parking sensor.


      
 * Materials Required.
  1. Arduino uno. 
  2. Breadboard.
  3. Jumper Wires.
  4. 560 Ohm Resistor.
  5. Red led.
  6. Ultrasonic sensor. 
  7. Piezo speaker.
  8. Lcd screen.
  9. Potentiometer.


 *The Circuit. 
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
      pin 11 -> Arduino pin 4
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
  
*/



//included header files

#include <LiquidCrystal.h>                             //includes the LiquidCrystal Library
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);                //creates an LCD object. Parameters: (12,11,5,4,3,2)

const int trigPin = 9;                                //const int var trigpin is declared and is assigned 9.
const int echoPin = 10;                               //const int var echopin is declared and is assigned 10.
const int buzzerpin = 6;                              //const int var buzzerpin is declared and is assigned 6.
const int ledPin = 7;                                 //const int var ledpin is declared and is assigned 7.

long duration;                              //define variables
int Distance;                               //define variables

void setup()                                    //void setup
{
  lcd.begin(16,2);                                  //initializes the height and width of the lcd display
  pinMode(trigPin, OUTPUT);                         //pin 9 to output.
  pinMode(echoPin, INPUT);                          //pin 10 to input.
  pinMode(buzzerpin,OUTPUT);                        //pin 6 to output.
  pinMode(ledPin, OUTPUT);                          //pin 7 to output.
}

void loop()                                 //void loop 
{
  digitalWrite(trigPin, LOW);               //digitalwrite trigpin low
  delayMicroseconds(2);                     //wait for 2 microseconds
  digitalWrite(trigPin, HIGH);              //digitalwrite trigpin high
  delayMicroseconds(10);                    //wait for 10 microseconds
  digitalWrite(trigPin, LOW);               //digitalwrite trigpin low
  
  duration = pulseIn(echoPin, HIGH);        //sound wave travel time is stored in variable duration
  Distance= duration*0.034/2;               //calculate the distance
  
  if(Distance <= 10)                        //if statement for the alarm, if distance is less than or equal to 10cm
  {
    tone(buzzerpin, 1000);                  //buzzer will go on for 50 milliseconds
    delay(50);  
    noTone(buzzerpin);                      //buzzer will go off for 10 milliseconds
    delay(10);
    digitalWrite(ledPin,HIGH);              //led will go on for 50 milliseconds
    delay(50);
    digitalWrite(ledPin,LOW);               //led will go off for 50 milliseconds
    delay(50);
    lcd.setCursor(0,1);                     //this will set cursor by (column,row)
    lcd.print("TOO CLOSE!! ");              //displays message
  }
  else                                      //else
  {
    noTone(buzzerpin);                      //buzzer stays off
    delay(100);
    lcd.setCursor(0,1);                     //and different message is printed
    lcd.print("CLEAR :)    ");
  }
  lcd.setCursor(0,0);                       //Sets the location of the cursor
  lcd.print("Distance: ");                  //Prints distance in cm
  lcd.print(Distance);                      
  lcd.print(" cm.");
  delay(100);
}                                           //end
