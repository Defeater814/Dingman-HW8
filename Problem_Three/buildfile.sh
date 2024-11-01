# Matthew Dingman
# Professor Qouneh

# buildfile.sh Build file for bankApp.cpp

echo "Creating a build file.."

g++ -g bankApp.cpp bankAccount.cpp -o bankApp

echo "Build file successfully created"
