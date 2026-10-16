//
// Created by Zachariáš Juriš on 28/04/2026.
//

#ifndef OOP_WOW_ITEM_H
#define OOP_WOW_ITEM_H
#include <string>


class Item {
private:
    std::string name;
    int damageBonus;
    int armorBonus;

public:
    Item(std::string name, int damageBonus, int armorBonus);
    std::string getName();
    int getDamageBonus();
    int getArmorBonus();
};


#endif //OOP_WOW_ITEM_H