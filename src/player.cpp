#include "player.hpp"
#include <iostream>

Player createPlayer(const char* name, int level, int health, int mana, int strength, int agility, int intelligence) {
    Player p;
    std::string playerName;

    std::cout << "Please choose your name" << std::endl;
    std::cin >> playerName;

    std::cout << "Welcome to champions" << playerName << std::endl;
    
    std::cout << "Please choose your class" << std::endl;
    std::cout << "1. Warrior" << std::endl;
    std::cout << "2. Mage" << std::endl;
    std::cout << "3. Rogue" << std::endl;

    int classChoice;
    std::cin >> classChoice;
    
    switch (classChoice) {
        case 1:
            std::cout << "You have chosen the Warrior class!" << std::endl;
            p.name = playerName.c_str();
            p.level = level;
            p.health = health + 20;
            p.mana = mana;
            p.strength = strength + 20;
            p.agility = agility;
            p.intelligence = intelligence;
            break;
        case 2:
            std::cout << "You have chosen the Mage class!" << std::endl;
            p.name = playerName.c_str();
            p.level = level;
            p.health = health;
            p.mana = mana + 20;
            p.strength = strength;
            p.agility = agility;
            p.intelligence = intelligence + 5;
            break;
        case 3:
            std::cout << "You have chosen the Rogue class!" << std::endl;
            p.name = playerName.c_str();
            p.level = level;
            p.health = health;
            p.mana = mana;
            p.strength = strength;
            p.agility = agility + 15;
            p.intelligence = intelligence;
            break;
    }

    return p;
}

