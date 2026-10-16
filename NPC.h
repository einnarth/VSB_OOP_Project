//
// Created by Zachariáš Juriš on 28/04/2026.
//

#ifndef OOP_WOW_NPC_H
#define OOP_WOW_NPC_H

#include "Character.h"

class NPC : public Character {
private:
    int damage;
public:
    NPC(std::string name, int health, int damage);
    virtual ~NPC() override;
    virtual void performAction() override;
    int getDamage();
};

#endif //OOP_WOW_NPC_H