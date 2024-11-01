# Matthew Dingman
# Professor Qouneh

# Build file for myApp.cpp

# This file is used to create an executable using the derek_LED.cpp file and the
# myApp.cpp file.

echo "Creating a build file.."

g++ -g myApp.cpp derek_LED.cpp -o myApp

echo "Build file created!"
