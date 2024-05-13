#ifndef DISCLAIMER_H
#define DISCLAIMER_H

#include <iostream>
#include <string>

using namespace std;

class Disclaimer
{
public:
    Disclaimer(); // Constructor declaration
    void printDisc(); // Declaration of printDisc member function
private:
    string printMessage; // Variable to store the message
};

#endif // DISCLAIMER_H
