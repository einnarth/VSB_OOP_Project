//
// Created by Zachariáš Juriš on 28/04/2026.
//

#include "Item.h"

#include <iostream>

Item::Item(std::string name, int damageBonus, int armorBonus) {
    this->name = name;
    this->damageBonus = damageBonus;
    this->armorBonus = armorBonus;

    std::cout << "[PREDMET] Vytvořen předmět: " << this->name
              << " (Útok: +" << this->damageBonus
              << ", Brnění: +" << this->armorBonus << ")" << std::endl;
}

std::string Item::getName() {
    return this->name;
}

int Item::getDamageBonus() {
    return this->damageBonus;
}

int Item::getArmorBonus() {
    return this->armorBonus;
}