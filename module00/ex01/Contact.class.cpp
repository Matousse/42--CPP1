#include "Contact.class.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact() {}

void Contact::setContact(const std::string& first, const std::string& last, const std::string& nick, const std::string& phone, const std::string& secret)
{
    firstName = first;
    lastName = last;
    nickname = nick;
    phoneNumber = phone;
    darkestSecret = secret;
}

std::string Contact::getFirstName() const 
{
    return (firstName);
}

std::string Contact::getLastName() const 
{
    return (lastName);
}

std::string Contact::getNickname() const
{
    return (nickname);
}

std::string Contact::getPhoneNumber() const
{
    return (phoneNumber);
}

std::string Contact::getDarkestSecret() const
{
    return(darkestSecret);
}


