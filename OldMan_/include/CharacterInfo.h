#ifndef CHARACTERINFO_H
#define CHARACTERINFO_H

#include <iostream>
#include <string>

using namespace std;

class CharacterInfo
{
    public:
        CharacterInfo();
        void Domino();
        void Dutch();
        void Logan();
        void Serg();

    private:
        string DominoTay;
        int dominoAge;

        string DutchPli;
        int dutchAge;

        string LoganKel;
        int logAge;

        string SergKoz;
        int sergAge;

};

#endif // CHARACTERINFO_H
