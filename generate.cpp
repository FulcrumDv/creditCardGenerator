//
// Created by jackw on 25/06/2024.
//

#include "generate.h"
#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iostream>

std::vector<std::string> readsAllLinesFromFile(const std::string &fileName) {
    std::ifstream file(fileName);
    if (!file.is_open()) {
        std::cerr << "Failed to open file: " << fileName << std::endl;
        return {};
    }

    std::vector<std::string> lines;
    std::string line;
    while (std::getline(file, line)) {
        lines.push_back(line);
    }

    if (lines.empty()) {
        std::cerr << "File is empty: " << fileName << std::endl;
    }

    return lines;
}

std::string getRandomLine(const std::vector<std::string> &lines) {
    if (lines.empty()) {
        std::cerr << "No lines to select from." << std::endl;
        return "";
    }

    int index = rand() % lines.size();
    return lines[index];
}

std::string generate::genName() {
    std::vector<std::string> firstNames = readsAllLinesFromFile("../firstNames.txt");
    std::vector<std::string> lastNames = readsAllLinesFromFile("../secondNames.txt");

    std::string firstName = getRandomLine(firstNames);
    std::string lastName = getRandomLine(lastNames);

    std::string fullName = firstName + " " + lastName;
    return fullName;
}

// generate card number in this format
std::string generate::genCardNumber() {
    std::string cardNumber;
    // loop through 4 times to generate 4 sets of 4 digits separated by a hyphen
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cardNumber += std::to_string(rand() % 10);
        }
        if (i < 3) {
            cardNumber += "-";
        }
    }
  return cardNumber;

}

std::string generate::genCardCVV() {
    return std::to_string(rand() % 1000);


}




