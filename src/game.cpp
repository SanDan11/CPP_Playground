#include <iostream>

#include "game.hpp"

void prompt(void) {
    std::cout << "You crashland on a planet and the scanner is broken." << std::endl;
    std::cout << "You need to find 3 parts to fix the ship and escape." << std::endl;
    std::cout << "Look around and you see there is a smoke coming from the north." << std::endl;
    std::cout << "What do you do?" << std::endl;

    std::cout << "1. Go north" << std::endl;
    std::cout << "2. Go south" << std::endl;
    std::cout << "3. Go east" << std::endl;
    std::cout << "4. Go west" << std::endl;
    std::cout << "5. Stay put and check ship" << std::endl;

    int choice;
    std::cin >> choice;

    switch (choice) {
        case 1:
            north();
            break;
        case 2:
            std::cout << "You head south and find a dense forest." << std::endl;
            break;
        case 3:
            std::cout << "You head east and find a river." << std::endl;
            break;
        case 4:
            std::cout << "You head west and find a mountain." << std::endl;
            break;
        case 5:
            std::cout << "You check the ship and find that the scanner is indeed broken." << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            prompt();
            break;
    }

}

void north() {
    std::cout << "You head north and find a small village." << std::endl;
    std::cout << "The villagers look at you in awe." << std::endl;
    std::cout <<  "You try to ask them questions but they don't understand you" << std::endl;
    
    std::cout << "You try to find a way to commiunicate so you look for a dirt and a stick to draw into the ground" << std::endl;
}
