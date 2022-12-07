// Copyright (c) 2021 Venika Sem All rights reserved

// Created by: Venika Sem
// Created on: Dec 2022
// This program finds the perimeter of heptagon

#include <cmath>
#include <iostream>
#include <string>

float PerimeterOfHeptagon(int side) {
    // Calculates a heptagon's perimeter

    float perimeter;

    if (side < 0) {
        return -1;
    } else {
        perimeter = 7 * side;
        return perimeter;
    }
}

int main() {
    // Gets input and calls to calculate the volume of the cylinder

    int sideInteger;
    float heptagonPerimeter;
    std::string sideText;

    try {
        std::cout << "Enter side of a cylinder (cm): ";
        std::cin >> sideText;
        sideInteger = stoi(sideText);
        heptagonPerimeter = PerimeterOfHeptagon(sideInteger);
        std::cout << std::endl;
        std::cout << "This heptagon's perimeter is "
        <<heptagonPerimeter << " cm";
        std::cout << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Invalid input.";
        std::cout << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
