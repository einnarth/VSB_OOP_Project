#include <iostream>
#include <vector>
#include "HeroClass.h"
#include "NPC.h"
#include "Item.h"
#include "Graveyard.h"

int main() {
    std::cout << "VITAJTE VO SVETE AZEROTHU" << std::endl;

    Mage* jaina = new Mage("Jaina", 80);
    Warrior* varian = new Warrior("Varian", 160);
    Druid* malfurion = new Druid("Malfurion", 110);
    Hunter* rexxar = new Hunter("Rexxar", 95);
    DeathKnight* arthas = new DeathKnight("Arthas", 130);

    Item* frostStaff = new Item("Ľadová palica", 35, 0);
    Item* heavySword = new Item("Ťažký meč", 40, 0);
    Item* greatShield = new Item("Veľký štít", 0, 30);
    Item* huntingBow = new Item("Lovecký luk", 28, 0);
    Item* shadowMace = new Item("Palcát tieňov", 45, 0);

    std::cout << "PRÍPRAVA HRDINOV" << std::endl;
    jaina->addToBackpack(new Item("Liečivý elixír", 0, 0));

    jaina->pickUpWeapon(frostStaff);
    varian->pickUpWeapon(heavySword);
    varian->pickUpArmor(greatShield);
    rexxar->pickUpWeapon(huntingBow);
    arthas->pickUpWeapon(shadowMace);

    std::vector<NPC*> enemies;
    enemies.push_back(new NPC("Murloc Raider", 55, 20));
    enemies.push_back(new NPC("Kobold Miner", 85, 30));
    enemies.push_back(new NPC("Forest Troll", 160, 32));
    enemies.push_back(new NPC("Black Dragon", 640, 50));

    std::cout << "SÚBOJ" << std::endl;
    for (size_t i = 0; i < enemies.size(); i++) {
        std::cout << "Nepriateľ [" << (i + 1) << "]: " << enemies[i]->getName()
                  << " (" << enemies[i]->getHealth() << " HP)" << std::endl;
    }
    int currentEnemyIndex = 0;
    while (currentEnemyIndex < enemies.size()) {
        NPC* currentEnemy = enemies[currentEnemyIndex];
        std::cout << "SÚBOJ S PRÍŠEROU: " << currentEnemy->getName() << " (" << currentEnemy->getHealth() << " HP)" << std::endl;

        while (currentEnemy->isAlive() && (jaina->isAlive() || varian->isAlive() || malfurion->isAlive() || rexxar->isAlive() || arthas->isAlive())) {
            if (jaina->isAlive()) {
                jaina->performAction();
                currentEnemy->takeDamage(jaina->getTotalDamage());
            }
            if (!currentEnemy->isAlive()) break;

            if (varian->isAlive()) {
                varian->performAction();
                currentEnemy->takeDamage(varian->getTotalDamage());
            }
            if (!currentEnemy->isAlive()) break;

            if (malfurion->isAlive()) {
                malfurion->performAction();
                currentEnemy->takeDamage(malfurion->getTotalDamage());
            }
            if (!currentEnemy->isAlive()) break;

            if (rexxar->isAlive()) {
                rexxar->performAction();
                currentEnemy->takeDamage(rexxar->getTotalDamage());
            }
            if (!currentEnemy->isAlive()) break;

            if (arthas->isAlive()) {
                arthas->performAction();
                currentEnemy->takeDamage(arthas->getTotalDamage());
            }
            if (!currentEnemy->isAlive()) break;

            std::cout << "\n[PRÍŠERA ÚTOČÍ] " << currentEnemy->getName() << " vykonáva protiútok!" << std::endl;
            if (varian->isAlive()) {
                varian->takeDamage(currentEnemy->getDamage());
            } else if (arthas->isAlive()) {
                arthas->takeDamage(currentEnemy->getDamage());
            } else if (jaina->isAlive()) {
                jaina->takeDamage(currentEnemy->getDamage());
            } else if (malfurion->isAlive()) {
                malfurion->takeDamage(currentEnemy->getDamage());
            } else if (rexxar->isAlive()) {
                rexxar->takeDamage(currentEnemy->getDamage());
            }
        }
        if (!currentEnemy->isAlive()) {
            std::cout << "\n[VÝHRA] Nepriateľ " << currentEnemy->getName() << " bol porazený!" << std::endl;
            Graveyard::Bury(currentEnemy->getName());
            currentEnemyIndex++;
        } else {
            std::cout << "\n[PREHRA] Hrdinovia podľahli sile nepriateľa..." << std::endl;
            break;
        }
    }
    std::cout << "KONIEC SÚBOJA" << std::endl;
    Graveyard::reportStatus();

    delete jaina;
    delete varian;
    delete malfurion;
    delete rexxar;
    delete arthas;

    for (NPC* enemy : enemies) {
        delete enemy;
    }
    enemies.clear();

    return 0;
}