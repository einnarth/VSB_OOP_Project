//
// Created by Zachariáš Juriš on 28/04/2026.
//

#ifndef OOP_WOW_CHARACTER_H
#define OOP_WOW_CHARACTER_H
#include <iosfwd>

#include <string>


class Character {
    protected:
    std::string name;
    int health;

    public:
    Character(std::string name, int health);
    virtual ~Character();
    virtual void performAction() =0;
    void takeDamage(int amount);
    bool isAlive() const;
    std::string getName();
    int getHealth();
};


#endif //OOP_WOW_CHARACTER_H