//
// Created by jackw on 25/06/2024.
//

#include "menu.h"
#include "generate.h"
#include <iostream>


void menu::displayMenu() {
    std::cout << " ____              _    ____                           _             \n";
    std::cout << "/ ___|__ _ _ __ __| |  / ___| ___ _ __   ___ _ __ __ _| |_ ___  _ __ \n";
    std::cout << "| |   / _` | '__/ _` | | |  _ / _ \\ '_ \\ / _ \\ '__/ _` | __/ _ \\| '__|\n";
    std::cout << "| |__| (_| | | | (_| | | |_| |  __/ | | |  __/ | | (_| | || (_) | |   \n";
    std::cout << " \\____\\__,_|_|  \\__,_|  \\____|\\___|_| |_|\\___|_|  \\__,_|\\__\\___/|_|\n\n";

    std::cout << "1. Generate Full Credit Card" << std::endl;
    std::cout << "2. Generte Card Number" << std::endl;
    std::cout << "3. Generate Card CVV" << std::endl;
    std::cout << "4. Generate Card Expiry Date" << std::endl;
    std::cout << "5. Save Credit Card to File" << std::endl;
    std::cout << "6. Exit" << std::endl;
}

void menu::options() {
    int choice;
    do {
        displayMenu();
        std::cout << "Enter choice: ";
        std::cin >> choice;
        generate creditCardInstance;
        switch (choice) {
            case 1:
                creditCardInstance.genName();
                creditCardInstance.genCardNumber();
                creditCardInstance.genCardCVV();
                creditCardInstance.genExpr();
                break;
            case 2:
                creditCardInstance.genCardNumber();
                break;
            case 3:
                creditCardInstance.genCardCVV();
                break;
            case 4:
                creditCardInstance.genExpr();
                break;
            case 5:
                std::cout << "Saving credit card to file..." << std::endl;
                break;
            case 6:
                std::cout << "Exiting..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 6);
}
