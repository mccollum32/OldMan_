#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <string>

using namespace std;

class Menu
{
public:
    Menu();
    void Display();
    void About();
    void Start();
    void CharArc();
    void Options();
    void Exit();
protected:
    int choicePlayer;
private:
    int choice1;


};

#endif // MENU_H
