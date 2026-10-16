//
// Created by Zachariáš Juriš on 28/04/2026.
//
#include "Inventory.h"
#include <iostream>

Inventory::Inventory() {
    this->equippedWeapon = nullptr;
    this->equippedArmor = nullptr;
}
Inventory::~Inventory() {
    if (this->equippedWeapon != nullptr) {
        delete this->equippedWeapon;
        this->equippedWeapon = nullptr;
    }
    if (this->equippedArmor != nullptr) {
        delete this->equippedArmor;
        this->equippedArmor = nullptr;
    }
    for (Item* item : this->backpack) {
        if (item != nullptr) {
            delete item;
        }
    }
    this->backpack.clear();
}
void Inventory::addToBackpack(Item* item) {
    if (item != nullptr) {
        this->backpack.push_back(item);
        std::cout << "[BATOH] Predmet '" << item->getName() << "' bol uložený do batohu." << std::endl;
    }
}
void Inventory::equipWeapon(Item* novaZbran) {
    if (this->equippedWeapon != nullptr) {
        std::cout << "[VÝBAVA] Odkladáš zbraň '" << this->equippedWeapon->getName() << "' späť do batohu." << std::endl;
        this->backpack.push_back(this->equippedWeapon);
    }
    this->equippedWeapon = novaZbran;
    if (this->equippedWeapon != nullptr) {
        std::cout << "[VÝBAVA] Teraz bojuješ s predmetom: " << this->equippedWeapon->getName() << std::endl;
    }
}

void Inventory::equipArmor(Item* novaZbroj) {
    if (this->equippedArmor != nullptr) {
        std::cout << "[VÝBAVA] Dávaš dole '" << this->equippedArmor->getName() << "' a dávaš ho do batohu." << std::endl;
        this->backpack.push_back(this->equippedArmor);
    }
    this->equippedArmor = novaZbroj;
    if (this->equippedArmor != nullptr) {
        std::cout << "[VÝBAVA] Tvoje brnenie je teraz: " << this->equippedArmor->getName() << std::endl;
    }
}

int Inventory::getTotalDamage() {
    if (this->equippedWeapon != nullptr) {
        return this->equippedWeapon->getDamageBonus();
    } else {
        return 0;
    }
}

int Inventory::getTotalArmor() {
    if (this->equippedArmor != nullptr) {
        return this->equippedArmor->getArmorBonus();
    } else {
        return 0;
    }
}

void Inventory::showInventory() {
    std::cout << "INVENTÁR:" << std::endl;
    std::cout << "AKTÍVNA VÝBAVA:" << std::endl;
    if (this->equippedWeapon != nullptr) {
        std::cout << "  - V RUKE: " << this->equippedWeapon->getName() << " (Bonus k útoku: +" << this->equippedWeapon->getDamageBonus() << ")" << std::endl;
    } else {
        std::cout << "  - V RUKE: [ Nič ]" << std::endl;
    }

    if (this->equippedArmor != nullptr) {
        std::cout << "  - NA SEBE: " << this->equippedArmor->getName() << " (Bonus k obrane: +" << this->equippedArmor->getArmorBonus() << ")" << std::endl;
    } else {
        std::cout << "  - NA SEBE: [ Nič ]" << std::endl;
    }

    std::cout << "OBSAH BATOHU:" << std::endl;
    if (this->backpack.empty()) {
        std::cout << "  - Batoh je momentálne prázdny." << std::endl;
    } else {
        for (Item* i : this->backpack) {
            std::cout << "  - " << i->getName() << " (Štatistiky: " << i->getDamageBonus() << " Útok / " << i->getArmorBonus() << " Obrana)" << std::endl;
        }
    }
}