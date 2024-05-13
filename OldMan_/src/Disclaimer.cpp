#include "Disclaimer.h"

using namespace std;

// Constructor definition
Disclaimer::Disclaimer()
{
    printMessage = "This game previously was called 'OldBro' and was written in C#.\nI am re-writing in C++ and eventually to Unreal Engine.\nThis is a turn-based RPG game which is based off of the user's choices.\nExamples: Baldur's Gate, Pokemon, World of Warcraft.\n";
}

// Definition of printDisc member function
void Disclaimer::printDisc()
{
    cout << "Warning: " << endl;
    cout << printMessage;
}
