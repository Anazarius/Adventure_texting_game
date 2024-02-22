#include <iostream>
#include <string>
#include "creature.h"
#include "titles.h"

using namespace std;

int main() {
    int Player_HP = 100;
    int Player_Damage = 20;
    string Player_Category = "Programmer";
    int Slime_HP = 50;
    int Slime_Damage = 10;
    string Slime_Category = "Slime";

    Creature Player(Player_HP, Player_Damage, Player_Category);
    Creature Slime(Slime_HP, Slime_Damage, Slime_Category);
    startTitle();
    return 0;
}