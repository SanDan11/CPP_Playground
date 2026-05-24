#include <iostream>

enum ItemType { ITEM_POTION, ITEM_KEY, ITEM_FOOD };
enum WeaponType { WEAPON_SWORD, WEAPON_BOW, WEAPON_STAFF };
enum ArmorType { ARMOR_HELMET, ARMOR_CHESTPLATE, ARMOR_LEGGINGS, ARMOR_BOOTS };

struct Item {
    const char* name;
    enum ItemType type;
    int price;
    float weight;
};

Item items[] = {
    {"Potion", ITEM_POTION, 50, 0.5},
};

struct Weapon{
    const char* name;
    enum WeaponType type;
    float price;
    float weight;
    float damage;
    int durability;
};

Weapon weapons[] = {
    {"Sword", WEAPON_SWORD, 100, 3.0, 10.0, 80},
};

struct Armor{
    const char* name;
    enum ArmorType type;
    float price;
    float weight;
    float defense;
    int durability;
};

Armor armor[] = {
    {"Helmet", ARMOR_HELMET, 50, 2.0, 5.0, 80},
};