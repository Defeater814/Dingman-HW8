# Matthew Dingman
# Professor Qouneh

# Build file for myApp.cpp

# This file is used to create an executable using the derek_LED.cpp file and the
# myBlink.cpp file.

echo "Creating a build file.."

g++ -g myBlink.cpp derek_LED.cpp -o myBlink

echo "Build file created!"
