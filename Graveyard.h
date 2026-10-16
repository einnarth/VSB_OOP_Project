//
// Created by Zachariáš Juriš on 28/04/2026.
//

#ifndef OOP_WOW_GRAVEYARD_H
#define OOP_WOW_GRAVEYARD_H

#include <vector>
#include <string>

class Graveyard {
    public:
    static int totalDeaths;
    static std::vector<std::string> fallenNames;
    static void Bury(std::string name);
    static void reportStatus();
};


#endif //OOP_WOW_GRAVEYARD_H