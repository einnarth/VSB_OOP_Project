//
// Created by Zachariáš Juriš on 28/04/2026.
//

#include "Hero.h"
#include <iostream>

Hero::Hero(std::string name, int health) : Character(name, health) {
    this->inventory = new Inventory();
    std::cout << "[HRDINA] Postava " << this->name << " vstoupila do hry." << std::endl;
}

Hero::~Hero() {
    if (this->inventory != nullptr) {
        delete this->inventory;
        this->inventory = nullptr;
    }
    std::cout << "[HRDINA] Hrdina " << this->name << " byl/a odstraněn ze světa." << std::endl;
}

void Hero::pickUpWeapon(Item* newWeapon) {
    if (newWeapon != nullptr) {
        std::cout << "[HRDINA] " << this->name << " zvedá zbraň." << std::endl;
        this->inventory->equipWeapon(newWeapon);
    }
}

void Hero::pickUpArmor(Item* newArmor) {
    if (newArmor != nullptr) {
        std::cout << "[HRDINA] " << this->name << " si připravuje zbroj." << std::endl;
        this->inventory->equipArmor(newArmor);
    }
}

void Hero::addToBackpack(Item* item) {
    if (item != nullptr) {
        this->inventory->addToBackpack(item);
    }
}

int Hero::getTotalDamage() {
    int baseDamage = 10;
    int inventoryBonus = this->inventory->getTotalDamage();
    return baseDamage + inventoryBonus;
}

int Hero::getTotalArmor() {
    int baseArmor = 5;
    int inventoryBonus = this->inventory->getTotalArmor();
    return baseArmor + inventoryBonus;
}
void Hero::printDamageInfo() {
    int damage = this->getTotalDamage();
    std::cout << "[INFO] Způsobené poškození: " << damage << " bodů." << std::endl;
}
void Hero::heal(int amount) {
    this->health += amount;
    std::cout << "[LÉČENÍ] " << this->name << " se léčí. Získává +" << amount << " HP. (Nyní: " << this->health << " HP)" << std::endl;
}

void Hero::heal(int amount, std::string potionName) {
    this->health += amount;
    std::cout << "[LÉČENÍ] " << this->name << " vypil lektvar: " << potionName << ". Získává +" << amount << " HP. (Nyní: " << this->health << " HP)" << std::endl;
}

void Hero::performAction() {
    std::cout << "[AKCE] Hrdina " << this->name << " provádí základní výpad!" << std::endl;
}