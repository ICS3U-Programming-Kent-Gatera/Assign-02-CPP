// Copyright [2022] <Mr. Kent>"  [legal/copyright]
//
// Date : 10 - 4 - 22
// Made a program to calculate the Surface Are and
// volume of a cone with user input.

#include <iostream>
#include <cmath>


int main() {
    float coneRadius;
    float coneHeight;
    float surfaceArea;
    float coneVolume;
    std::cout << "What is the radius of your cone?(cm): ";
    std::cin >> coneRadius;
    std::cout << "What is the height of your cone?(cm): ";
    std::cin >> coneHeight;
    surfaceArea = M_PI * coneRadius *
    (coneRadius + sqrt(pow(coneHeight, 2) + (pow(coneRadius, 2))));
    coneVolume = M_PI * pow(coneRadius, 2) * (coneHeight)/3;
    std::cout << surfaceArea << " cm^2" << std::endl;
    std::cout << coneVolume << " cm^3" << std::endl;
}
