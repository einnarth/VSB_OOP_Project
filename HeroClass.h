//
// Created by Zachariáš Juriš on 28/04/2026.
//

#ifndef OOP_WOW_CLASS_H
#define OOP_WOW_CLASS_H

#include "Hero.h"
#include <string>

class Mage : public Hero {
public:
    Mage(std::string name, int health);
    ~Mage() override;
    void performAction() override;
};

class Warrior : public Hero {
public:
    Warrior(std::string name, int health);
    ~Warrior() override;
    void performAction() override;
};

class Hunter : public Hero {
public:
    Hunter(std::string name, int health);
    ~Hunter() override;
    void performAction() override;
};

class Druid : public Hero {
public:
    Druid(std::string name, int health);
    ~Druid() override;
    void performAction() override;
};

class DeathKnight : public Hero {
public:
    DeathKnight(std::string name, int health);
    ~DeathKnight() override;
    void performAction() override;
};


#endif //OOP_WOW_CLASS_H