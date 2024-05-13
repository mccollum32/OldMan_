#include "CharacterInfo.h"
using namespace std;


//Define each character using a String & Int
CharacterInfo::CharacterInfo()
{
    DominoTay = "Domino Taylor";
    DutchPli = "Dutch Plissken";
    LoganKel = "Logan Crash";
    SergKoz = "Sergei Petrov";
    dominoAge = 19;
    dutchAge = 48;
    logAge = 30;
    sergAge = 35;
}

void CharacterInfo::Domino()
{
    cout << "Character: " << DominoTay << ": " << dominoAge << endl;
    cout << "Bio: " << "Born in Parts Unknown, Domino's childhood is cloudy from her last full memory\nof waking up in a labratory under the name known as \"Project 3x\".\nSergei saved her and a few other lost children from the labratoy.\nTrying to gain what little she has from her lost memory she searches for clues about her life.\nUnder the wing of Sergei, Domino hones in on her skills to help save the lost children" << endl;
}

void CharacterInfo::Dutch()
{
    cout << "Character: " << DutchPli << ": " << dutchAge << endl;
    cout << "Bio: " << "Born in the UK, Dutch learned through various fights growing up he was a talented street fighter.\nHe later joined in the British Army a very decorated soldier during the Cold War in the \n\"15th Infantry Brigade\".\nDutch mastered his craft with weapononry also as a spotter.\nHis specialty is sniping, short/mid/long range weapons" << endl;

}

void CharacterInfo::Logan()
{
    cout << "Character: " << LoganKel << ": " << logAge << endl;
    cout << "Bio: " << "Born in Alaska, Former US Marine of the \"1st Marine Regiment\".\nLogan has a natural sense for the hunt and battle.\nAn outcast since the death of his parents at the young age of 10.\nLogan went under the wing of his grandfather and has been trained to survive.\nSurvival is what he knows best high level of close quaters combat, long distance, hand crafted weapons and demoltions." <<endl;
}

void CharacterInfo::Serg()
{
    cout << "Character: " << SergKoz << ": " << sergAge << endl;
    cout << "Bio: " << "Born in Moscow, Russia Sergei was predetermined to be a soldier of fortune.\nBeing part of the Cold War Sergei only knows how to survive.\nWith a his part in \"Operation Ryan\".Sergei was part of the team that shot down KAL-007.\nHis specialty is mid/long distance weapons, hand to hand combat and steet smarts." <<endl;
}
