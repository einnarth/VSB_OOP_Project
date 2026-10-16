//
// Created by Zachariáš Juriš on 28/04/2026.
//

#include "NPC.h"
#include <iostream>

NPC::NPC(std::string name, int health, int damage) : Character(name, health) {
    this->damage = damage;
}

NPC::~NPC() {}

void NPC::performAction() {
    std::cout << "[BOJ] " << this->name << " útočí s poškodením: " << this->damage << " HP!" << std::endl;
}

int NPC::getDamage() {
    return this->damage;
}