#include <string>

class Creature {
public:
    Creature(int HP, int damage, const std::string& category);
    void setValue(int HP, int damage, const std::string& category); 
    void makeDamage(int damage); 
    void getValue() const; 
    int getHP() const;

private:
    int HP;
    int damage;
    std::string category;
};
