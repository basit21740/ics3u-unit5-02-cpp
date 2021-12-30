// Copyright (c) 2021 Abdul basit All rights reserved.
//
// Created by: Abdul basit
// Created on: Dec 2021
// This program calculate area of triangle


#include <iostream>
#include <string>


void CaculateArea(int base, int height) {
    // this function calculate area of triangle

    float area;

    // process
    area = 0.5 * base * height;

    // output
    std::cout << "The area of triangle is " << area << " cm²" << std::endl;
}


main() {
    // this function gets base and height

    std::string base;
    std::string height;
    int integerAsBase;
    int integerAsHeight;

    // input
    std::cout << "Enter the base of triangle: ";
    std::cin >> base;
    std::cout << "Enter the height of triangle: ";
    std::cin >> height;
    std::cout << std::endl;

    // call function
    try {
        integerAsBase = std::stoi(base);
        integerAsHeight = std::stoi(height);
        CaculateArea(integerAsBase, integerAsHeight);
    } catch (std::invalid_argument) {
        std::cout << "It is not an integer";
    }
    std::cout << std::endl;
    std::cout << "\nDone." << std::endl;
}
