#include <iostream>

#include "game.hpp"




void prompt(void) {

    bool gameRunning = true;

    while (gameRunning) {

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
            gameRunning = false;
            break;
        case 2:
            south();
            gameRunning = false;
            break;
        case 3:
            east();
            gameRunning = false;
            break;
        case 4:
            west();
            gameRunning = false;
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            prompt();
            break;
        }
    }

}


void north() {

    bool isRunning = true;

    std::cout << "You head north and find a small village." << std::endl;
    std::cout << "The villagers look at you in awe." << std::endl;
    std::cout <<  "You try to ask them questions but they don't understand you" << std::endl;
    
    std::cout << "You try to find a way to commiunicate so you turn on your translator to see if it picks up any language" << std::endl;



    while (isRunning) {

        std::cout << "What should I do next?" << std::endl;

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout <<  "Head to the shop for supplies with the money the villagers provided" << std::endl;
                isRunning = false;
                break;
            case 2:
                std::cout << "" << std::endl;
                isRunning = false;
                break;
            default:
                std::cout << "Invalid choice. Please choose again." << std::endl;
                break;
        }
    }  
}

void south() {

    bool isRunning = true;

    std::cout << "You head north and find a small village." << std::endl;
    std::cout << "The villagers look at you in awe." << std::endl;
    std::cout <<  "You try to ask them questions but they don't understand you" << std::endl;
    
    std::cout << "You try to find a way to commiunicate so you turn on your translator to see if it picks up any language" << std::endl;



    while (isRunning) {

        std::cout << "What should I do next?" << std::endl;

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout <<  "Head to the shop for supplies with the money the villagers provided" << std::endl;
                isRunning = false;
                break;
            case 2:
                std::cout << "" << std::endl;
                isRunning = false;
                break;
            default:
                std::cout << "Invalid choice. Please choose again." << std::endl;
                break;
        }
    }  
}

void east() {

    bool isRunning = true;

    std::cout << "You head north and find a small village." << std::endl;
    std::cout << "The villagers look at you in awe." << std::endl;
    std::cout <<  "You try to ask them questions but they don't understand you" << std::endl;
    
    std::cout << "You try to find a way to commiunicate so you turn on your translator to see if it picks up any language" << std::endl;



    while (isRunning) {

        std::cout << "What should I do next?" << std::endl;

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout <<  "Head to the shop for supplies with the money the villagers provided" << std::endl;
                isRunning = false;
                break;
            case 2:
                std::cout << "" << std::endl;
                isRunning = false;
                break;
            default:
                std::cout << "Invalid choice. Please choose again." << std::endl;
                break;
        }
    }  
}

void west() {

    bool isRunning = true;

    std::cout << "You head north and find a small village." << std::endl;
    std::cout << "The villagers look at you in awe." << std::endl;
    std::cout <<  "You try to ask them questions but they don't understand you" << std::endl;
    
    std::cout << "You try to find a way to commiunicate so you turn on your translator to see if it picks up any language" << std::endl;



    while (isRunning) {

        std::cout << "What should I do next?" << std::endl;

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout <<  "Head to the shop for supplies with the money the villagers provided" << std::endl;
                isRunning = false;
                break;
            case 2:
                std::cout << "" << std::endl;
                isRunning = false;
                break;
            default:
                std::cout << "Invalid choice. Please choose again." << std::endl;
                break;
        }
    }  
}

