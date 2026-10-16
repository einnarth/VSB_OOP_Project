//
// Created by Zachariáš Juriš on 28/04/2026.
//
#include "Character.h"
#include <iostream>

Character::Character(std::string name, int health) {
    this->name = name;
    this->health = health;
    std::cout << "[POSTAVA] Vytvorená postava: " << this->name << " s " << this->health << " HP." << std::endl;
}

Character::~Character() {}

void Character::takeDamage(int amount) {
    this->health -= amount;
    if (this->health < 0) {
        this->health = 0;
    }
    std::cout << "[ZÁSAH] " << this->name << " obdržal " << amount << " poškodenie. Zostávajúce HP: " << this->health << std::endl;
}

bool Character::isAlive() const {
    return this->health > 0;
}

std::string Character::getName() {
    return this->name;
}

int Character::getHealth() {
    return this->health;
}