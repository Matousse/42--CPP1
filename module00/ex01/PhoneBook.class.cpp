// PhoneBook.cpp
#include "PhoneBook.class.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib> 

PhoneBook::PhoneBook() : currentIndex(0), totalContacts(0) {}

std::string PhoneBook::truncate(const std::string& content) const {
    if (content.length() > 10)
        return content.substr(0, 9) + ".";
    return content;
}

bool PhoneBook::isValidInput(const std::string& input) const {
    if (input.empty())
        return(false);
    else
        return(true);
}

std::string PhoneBook::getInput(const std::string& prompt) const {
    std::string input;

    while (true) 
    {
        std::cout << prompt;
        std::getline(std::cin, input);
        if (std::cin.eof())
            exit(0);
        if (!isValidInput(input))
            printf("Field cannot be empty");
        if (isValidInput(input))
            break;
    }
    return input;
}

void PhoneBook::addContact() {
    std::string first = getInput("Enter first name: ");
    std::string last = getInput("Enter last name: ");
    std::string nick = getInput("Enter nickname: ");
    std::string phone = getInput("Enter phone number: ");
    std::string secret = getInput("Enter darkest secret: ");

    contacts[currentIndex].setContact(first, last, nick, phone, secret);
    currentIndex = (currentIndex + 1) % 8;
    if (totalContacts < 8)
        totalContacts++;
}

void PhoneBook::displayContactList() const {
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;

    for (int i = 0; i < totalContacts; i++) {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << truncate(contacts[i].getFirstName()) << "|"
                  << std::setw(10) << truncate(contacts[i].getLastName()) << "|"
                  << std::setw(10) << truncate(contacts[i].getNickname()) << std::endl;
    }
}

void PhoneBook::displayContact(int index) const {
    std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
    std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
    std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
}

void PhoneBook::searchContact() const {
    if (totalContacts == 0) {
        std::cout << "Phonebook is empty!" << std::endl;
        return;
    }

    displayContactList();
    std::string input = getInput("Enter index to display: ");
    
    int index = std::atoi(input.c_str());
    if (index >= 0 && index < totalContacts)
        displayContact(index);
    else
        std::cout << "Invalid index!" << std::endl;
}