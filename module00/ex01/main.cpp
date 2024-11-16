#include "PhoneBook.class.hpp"
#include <iostream>

int main() {
    PhoneBook phoneBook;
    std::string command;

    while (true) {
        std::cout << "\nEnter a command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);
        
        if (std::cin.eof())
            break;

        if (command == "ADD")
            phoneBook.addContact();
        else if (command == "SEARCH")
            phoneBook.searchContact();
        else if (command == "EXIT")
            break;
    }

    return 0;
}