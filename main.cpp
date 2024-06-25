#include <iostream>
#include <random>
#include "generate.h"
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iostream>
// Generates 16 digit or 19 card numbers

int main() {
    std::srand(static_cast<unsigned int>(std::time(0)));  // Seed the random number generator

    // Create an instance of the Generate class
    generate creditCardInstance;

    // call fucntions to generate full card
    std::string number = creditCardInstance.genCardNumber();
    std::string name = creditCardInstance.genName();

    // Printing card to the console
    std::cout << "Name: " << name << std::endl;
    std::cout << "Card Number: " << number << std::endl;
}
