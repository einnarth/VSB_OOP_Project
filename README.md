# Azeroth RPG Simulation ⚔️

> A text-based RPG combat simulation built in C++ to demonstrate core Object-Oriented Programming principles.

This project is a console-based battle simulation inspired by the world of Azeroth. It was developed for an OOP course to practically implement and showcase advanced object-oriented concepts through a turn-based combat scenario between a party of heroes and a series of enemies.

## ✨ Core OOP Concepts Applied
- **Inheritance:** A base `Character` class is extended by `Hero` and `NPC`. The `Hero` class further branches into specific specializations (`Mage`, `Warrior`, `Hunter`, `Druid`, `DeathKnight`).
- **Polymorphism:** The virtual function `performAction()` allows unique combat behaviors and attack mechanics for each specific hero class and enemy.
- **Composition:** A `Hero` owns an `Inventory`, which in turn manages equipped and stored `Item` objects.
- **Encapsulation:** Internal logic and data states (health, base damage, equipped items) are securely bundled and protected within their respective classes.
- **Static Members:** A `Graveyard` utility class uses static variables and methods to maintain a global record of all defeated characters throughout the runtime.

## 🏗️ Simulation Flow
1. **Preparation:** The hero party (e.g., Jaina, Varian) is initialized, and characters equip their specific weapons and armor.
2. **Turn-Based Combat:** Heroes attack the current enemy sequentially. If the enemy survives the round, it counter-attacks a hero.
3. **Progression & Logging:** Defeated entities are logged into the `Graveyard`. The simulation continues until all enemies are cleared (Victory) or the entire hero party falls (Defeat).

## 🛠️ Tech Stack
* **Language:** C++
* **Concepts:** OOP Architecture, Class Hierarchies, Console I/O

> Developed as a practical semester project at VŠB - Technical University of Ostrava (FEI).
