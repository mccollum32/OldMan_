#include "Menu.h"
#include "CharacterInfo.h"
#include <cstdlib>

using namespace std;

Menu::Menu()
{
    choice1 = 0;
    choicePlayer = 0;
}

void Menu::Display()
{
    cout << "Main Menu\n";
    cout << "1. Game Start\n";
    cout << "2. Character Arc\n";
    cout << "3. Options\n";
    cout << "4. About\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice1;
}

void Menu::About()
{
    cout << "About\n";
    cout << "This game is a text-based RPG game based on different stories using multiple characters.\n";
    cout << "Some stories are connected by choice and others by fate.\n";
    cout << "The main objective is to find out who is causing these random hits throughout the world.\n";
    cout << "Something keeps pointing back to a fallen friend, but there is always a twist to things!\n";
}

void Menu::Start()
{
    cout << "Starting Game\n";
    //TODO1 Add Game Mechanics and more player choices
}

void Menu::CharArc()
{
    //Calls the Character Class
    /*
    CharacterInfo players;
    players.Domino();
    players.Dutch();
    players.Logan();
    players.Serg();
    */
    cout << "Players Menu:\n";
    cout << "1. Domino Taylor\n";
    cout << "2. Dutch Plissken\n";
    cout << "3. Logan Crash\n";
    cout << "4. Sergei Petrov\n";
    cin >> choicePlayer;

}

void Menu::Options()
{
    cout << "Game Options Menu: " << endl;
    //TODO2 Add Game Menu options / list

}

void Menu::Exit()
{
    cout << "Exiting the game." << endl;
    exit(EXIT_SUCCESS);
}
