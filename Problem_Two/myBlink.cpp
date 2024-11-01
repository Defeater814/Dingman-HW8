// Matthew Dingman
// Professor Qouneh

// Application file for derek_LED.h and derek_LED.cpp

// This file uses the derek_LED.h file and the derek_LED.cpp file together to
// utilize the LED class. This program takes one command line argument to
// manipulate the LED, including on, off, flash, and status. These will
// respectively turns one of four LEDs on, off, flashes it, and reads the trigger
// status for the LED. 

// Example invocation: 
//    ./myApp on 2 0 (turns LED 2 on, with the 0 being irrelevant)
//    ./myApp blink 3 5 (blinks LED 3 on and off 5 times) 

#include<string>
#include<iostream>
#include<sstream>
#include<fstream>
using namespace std;
#include "derek_LED.h"
#define LED_PATH "/sys/class/leds/beaglebone:green:usr"

int main(int argc, char* argv[]){
  if(argc !=4) {
    cout << "Usage is makeLEDs <command> <led number 1 - 4> <amount of blinks (irrelevant if not using blink)>" << endl;
    cout << " command is one of: on, off, flash, status, or blink" << endl;
    cout << " e.g. makeLEDs flash" << endl;
  }
  cout << "Starting the makeLEDs program" << endl;
  string cmd(argv[1]);
  int ledNum = atoi(argv[2]);
  int blinks = atoi(argv[3]);

  LED leds[4] = { LED(0), LED(1), LED(2), LED(3) };
  
  if(cmd=="on")leds[ledNum].turnOn();
  else if(cmd=="off")leds[ledNum].turnOff();
  else if(cmd=="flash")leds[ledNum].flash("100"); // default is "50"
  else if(cmd=="status")leds[ledNum].outputState();
  else if(cmd=="blink")leds[ledNum].blink(blinks);
  else{ cout << "Invalid command!" << endl; }
  
  cout << "Finished the makeLEDs program" << endl;
  return 0;
}
