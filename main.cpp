#include <iostream>
#include <string>

using namespace std;

class Creature {
private:
    int HP;
    int damage;
    string category;

public:
    Creature(int initialHP, int initialDamage, string initialCategory) {
        HP = initialHP;
        damage = initialDamage;
        category = initialCategory;
    }
    void setValue(int newHP, int newDamage, string newCategory) {
        HP = newHP;
        damage = newDamage;
        category = newCategory;
    }
    void getValue() const {
        cout << "HP: " << HP << ", Damage: " << damage << ", Category: " << category << endl;
    }
    void makeDamage(int damageAmount) {
        HP -= damageAmount;
    }
};

int main() {
    int Player_HP = 100;
    int Player_Damage = 20;
    string Player_Category = "Warrior";
    int Slime_HP = 50;
    int Slime_Damage = 10;
    string Slime_Category = "Slime";

    Creature Player(Player_HP, Player_Damage, Player_Category);
    Creature Slime(Slime_HP, Slime_Damage, Slime_Category);

    cout << "Your stat is:" << endl;
    Player.getValue();

    while (Player_HP > 0 && Slime_HP > 0) {
        Player.makeDamage(10);
        Slime.makeDamage(20);
        cout << "After Damage: " << endl;
        Player.getValue();
        cout << "After Damage: " << endl;
        Slime.getValue();
    }

    return 0;
}
