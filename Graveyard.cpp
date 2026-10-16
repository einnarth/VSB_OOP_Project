//
// Created by Zachariáš Juriš on 28/04/2026.
//

#include "Graveyard.h"
#include <iostream>

int Graveyard::totalDeaths = 0;
std::vector<std::string> Graveyard::fallenNames;

void Graveyard::Bury(std::string name) {
    totalDeaths++;
    fallenNames.push_back(name);
    std::cout << "[CINTORÍN] Duša postavy " << name << " bola pohltená." << std::endl;
}

void Graveyard::reportStatus() {
    std::cout << "STAV CINTORÍNA:" << std::endl;
    std::cout << "Celkový počet padlých: " << totalDeaths << std::endl;
    std::cout << "Mená hrdinov, ktorí odpočívajú v pokoji:" << std::endl;

    if (fallenNames.empty()) {
        std::cout << "  (Zatiaľ nikto ne zomrel...)" << std::endl;x<
    } else {
        for (const std::string& heroName : fallenNames) {
            std::cout << "  - " << heroName << std::endl;
        }
    }
}

