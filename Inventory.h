//
// Created by Zachariáš Juriš on 28/04/2026.
//

#ifndef OOP_WOW_INVENTORY_H
#define OOP_WOW_INVENTORY_H


#include <vector>
#include "Item.h"

class Inventory {
private:
    Item* equippedWeapon;
    Item* equippedArmor;
    std::vector<Item*> backpack;

public:
    Inventory();
    ~Inventory();
    void equipWeapon(Item* item);
    void equipArmor(Item* item);
    void addToBackpack(Item* item);
    int getTotalDamage();
    int getTotalArmor();
    void showInventory();
};

#endif //OOP_WOW_INVENTORY_H