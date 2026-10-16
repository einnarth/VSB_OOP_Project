cmake_minimum_required(VERSION 4.1)
project(OOP_WoW)

set(CMAKE_CXX_STANDARD 20)

add_executable(OOP_WoW main.cpp
        Character.cpp
        Character.h
        Hero.cpp
        Hero.h
        HeroClass.cpp
        HeroClass.h
        Item.cpp
        Item.h
        Inventory.cpp
        Inventory.h
        NPC.cpp
        NPC.h
        Graveyard.cpp
        Graveyard.h
)
