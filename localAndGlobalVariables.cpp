// Copyright (c) 2022 Miguel Santacruz All rights reserved
//
// Created by: Miguel Santacruz
// Created on: Mar 2022
// This program shows how local and global variables work

#include <iostream>

// Global variable
int variableX = 25;


void localVariable() {
    // This is what happens with local variables

    int variableX = 40;
    int variableY = 10;
    int variableZ = variableX + variableY;
    std::cout << "Local variableX, variableY, variableZ: "
    << variableX << " + " << variableY << " = " << variableZ << std::endl;
}


    void globalVariable() {
    // This is what happens with global variables

    variableX = variableX + 1;
    int variableY = 10;
    int variableZ = variableX + variableY;
    std::cout << "Global variableX, variableY, variableZ: "
    << variableX << " + " << variableY << " = " << variableZ << std::endl;
}

int main() {
    // This shows what happens with local and global variables

    localVariable();
    globalVariable();
}
