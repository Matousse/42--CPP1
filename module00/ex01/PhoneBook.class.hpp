#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.class.hpp"

class PhoneBook {
private:
    Contact contacts[8];
    int currentIndex;
    int totalContacts;

    std::string truncate(const std::string& content) const;
    bool isValidInput(const std::string& str) const;
    std::string getInput(const std::string& prompt) const;

public:
    PhoneBook();
    void addContact();
    void searchContact() const;
    void displayContactList() const;
    void displayContact(int index) const;
};

#endif