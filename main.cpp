#include <iostream>
#include <iomanip>

const int ROWS = 3;
const int COLS = 3;

// Source data matrix
int electricityMatrix[ROWS][COLS] = {
    {10, 15, 20},  // Slab 1
    {10, 15, 20},  // Slab 2
    {10, 15, 20}   // Slab 3
};

// Function to calculate and display cost for slab 1
void costSlab1() {
    int units;
    std::cout << "Enter the number of units for Slab 1: ";
    std::cin >> units;

    if (units >= 0 && units <= 100) {
        std::cout << "Cost for Slab 1: Rs." << units * electricityMatrix[0][0] << std::endl;
    } else {
        std::cout << "Invalid number of units for Slab 1." << std::endl;
    }
}

// Function to calculate and display cost for slab 2
void costSlab2() {
    int units;
    std::cout << "Enter the number of units for Slab 2: ";
    std::cin >> units;

    if (units >= 101 && units <= 200) {
        std::cout << "Cost for Slab 2: Rs." << (units - 100) * electricityMatrix[1][1] << std::endl;
    } else {
        std::cout << "Invalid number of units for Slab 2." << std::endl;
    }
}

// Function to calculate and display cost for slab 3
void costSlab3() {
    int units;
    std::cout << "Enter the number of units for Slab 3: ";
    std::cin >> units;

    if (units >= 201 && units <= 300) {
        std::cout << "Cost for Slab 3: Rs." << (units - 200) * electricityMatrix[2][2] << std::endl;
    } else {
        std::cout << "Invalid number of units for Slab 3." << std::endl;
    }
}

int main() {
    // Display student ID at the top of the menu
    std::cout << "Student ID: [Farwa 21046]" << std::endl;

    while (true) {
        // Display menu
        std::cout << "\nMenu:" << std::endl;
        std::cout << "Press 1 to Display the bill of slab 1 and slab 2." << std::endl;
        std::cout << "Press 2 to Display the bill of slab 3." << std::endl;
        std::cout << "Press any other key to exit." << std::endl;

        // Get user choice
        char choice;
        std::cin >> choice;

        switch (choice) {
            case '1':
                costSlab1();
                costSlab2();
                break;
            case '2':
                costSlab3();
                break;
            default:
                std::cout << "Exiting the program." << std::endl;
                return 0;
        }
    }

    return 0;
}
