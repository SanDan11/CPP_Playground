#pragma once

struct Player {
    const char* name;
    int level;
    int health;
    int mana;
    int strength;
    int agility;
    int intelligence;   
};

Player createPlayer(const char* name, int level, int health, int mana, int strength, int agility, int intelligence);
