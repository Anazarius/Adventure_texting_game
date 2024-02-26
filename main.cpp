#include <iostream>
#include <string>
#include <cstdlib>

#include "creature.h"
#include "titles.h"
#include "doings.h"

using namespace std;

int main() {
    clearScreen();
    int Player_HP = 100;
    int Player_Damage = 20;
    string Player_Category = "Programmer";
    int Slime_HP = 50;
    int Slime_Damage = 10;
    string Slime_Category = "Slime";

    Creature Player(Player_HP, Player_Damage, Player_Category);
    Creature Slime(Slime_HP, Slime_Damage, Slime_Category);
    startTitle();
    do {
        systemMessage("New quest received! Talk to Elderly man\n");
        choice("1.Talk to him\n", "2.Go in the forest\n", "3.Die");
        int choice = getchar();
        switch (choice) {
            case '1':
                clearScreen();
                talkToElderyMen();
                break;
            case '2':
                clearScreen();
               goInForest();
                break;
            case '3':
                clearScreen();
                killYourSelf();
                break;
            default:
                clearScreen();
                continue;
        }
        break;
        
    } while (1);
    return 0;
}