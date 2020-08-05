// learncpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your full name: ";

    std::string full_name{};
    std::getline(std::cin, full_name);

    std::cout << "Enter your age: ";

    int age{};
    std::cin >> age;

    float avg{ static_cast<float>(age) / full_name.length() };

    std::cout << "You've lived " << avg << " years for each letter in your name.\n";

    return 0;
}

