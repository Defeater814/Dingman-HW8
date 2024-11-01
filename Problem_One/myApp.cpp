// Matthew Dingman
// Professor Qouneh

// Application file for derek_LED.h and derek_LED.cpp

// This file uses the derek_LED.h file and the derek_LED.cpp file together to
// utilize the LED class. This program takes one command line argument to
// manipulate the LED, including on, off, flash, and status. These will
// respectively turn all four LEDs on, off, flash them, and read the trigger
// status for the LEDs. 

// Example invocation: ./myApp on (turns the LED on)

#include<string>
#include<iostream>
#include<sstream>
#include<fstream>
using namespace std;
#include "derek_LED.h"
#define LED_PATH "/sys/class/leds/beaglebone:green:usr"

int main(int argc, char* argv[]){
  if(argc!=2) {
    cout << "Usage is makeLEDs <command>" << endl;
    cout << " command is one of: on, off, flash, or status" << endl;
    cout << " e.g. makeLEDs flash" << endl;
  }
  cout << "Starting the makeLEDs program" << endl;
  string cmd(argv[1]);
  LED leds[4] = { LED(0), LED(1), LED(2), LED(3) };
  for(int i=0; i<=3; i++){
    if(cmd=="on")leds[i].turnOn();
    else if(cmd=="off")leds[i].turnOff();
    else if(cmd=="flash")leds[i].flash("100"); // default is "50"
    else if(cmd=="status")leds[i].outputState();
    else{ cout << "Invalid command!" << endl; }
  }
  cout << "Finished the makeLEDs program" << endl;
  return 0;
}
