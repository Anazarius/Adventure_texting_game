#include "creature.h"
#include <iostream>

Creature::Creature(int HP, int damage, const std::string& category)
    : HP(HP), damage(damage), category(category) {}

void Creature::setValue(int HP, int damage, const std::string& category) {
    this->HP = HP;
    this->damage = damage;
    this->category = category;
}

void Creature::makeDamage(int damage) {
    HP -= damage;
    if (HP < 0)
        HP = 0;
}

void Creature::getValue() const {
    std::cout << "HP: " << HP << ", Damage: " << damage << ", Category: " << category << std::endl;
}

int Creature::getHP() const {
    return HP;
}