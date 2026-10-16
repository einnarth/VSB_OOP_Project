//
// Created by Zachariáš Juriš on 28/04/2026.
//

#ifndef OOP_WOW_HERO_H
#define OOP_WOW_HERO_H
#include "Character.h"
#include "Inventory.h"
#include "Item.h"

class Hero : public Character {
protected:
    Inventory* inventory;

public:
    Hero(std::string name, int health);
    ~Hero() override;

    void pickUpWeapon(Item* newWeapon);
    void pickUpArmor(Item* newArmor);
    void addToBackpack(Item* item);
    int getTotalDamage();
    int getTotalArmor();
    void printDamageInfo();
    void heal(int amount);
    void heal(int amount, std::string potionName);

    void performAction() override;
};

#endif //OOP_WOW_HERO_H