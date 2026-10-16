//
// Created by Zachariáš Juriš on 28/04/2026.
//

#include "HeroClass.h"

#include <iostream>

Mage::Mage(std::string name, int health) : Hero(name, health) {
    std::cout << "[ŠPECIALIZÁCIA] " << this->name << " bol/a vycvičený/á v magických umeniach." << std::endl;
}

Mage::~Mage() {
}

void Mage::performAction() {
    std::cout << "[BOJ] Mág " << this->name << " vyvoláva prudkú magickú búrku!" << std::endl;
    printDamageInfo();
}


Warrior::Warrior(std::string name, int health) : Hero(name, health) {
    std::cout << "[ŠPECIALIZÁCIA] " << this->name << " zložil/a prísahu bojovníka." << std::endl;
}

Warrior::~Warrior() {}

void Warrior::performAction() {
    std::cout << "[BOJ] Bojovník " << this->name << " vykonáva drvivý úder svojou zbraňou!" << std::endl;
    printDamageInfo();
}

Hunter::Hunter(std::string name, int health) : Hero(name, health) {
    std::cout << "[ŠPECIALIZÁCIA] " << this->name << " sa stal majstrom stopovania a lovu." << std::endl;
}

Hunter::~Hunter() {}

void Hunter::performAction() {
    std::cout << "[BOJ] Lovec " << this->name << " vypustil otrávený šíp zo tieňov!" << std::endl;
    printDamageInfo();
}

Druid::Druid(std::string name, int health) : Hero(name, health) {
    std::cout << "[ŠPECIALIZÁCIA] " << this->name << " prijal/a silu prírody a lesných duchov." << std::endl;
}

Druid::~Druid() {}

void Druid::performAction() {
    std::cout << "[BOJ] Druid " << this->name << " vyvoláva hnev koreňov a bleskov!" << std::endl;
    printDamageInfo();
}

DeathKnight::DeathKnight(std::string name, int health) : Hero(name, health) {
    std::cout << "[ŠPECIALIZÁCIA] " << this->name << " povstal/a ako obávaný rytier smrti." << std::endl;
}

DeathKnight::~DeathKnight() {}

void DeathKnight::performAction() {
    std::cout << "[BOJ] Rytier smrti " << this->name << " vysáva životnú silu z nepriateľa!" << std::endl;
    printDamageInfo();
}