#include "Animal.hpp"

Animal::Animal()
{
}

Animal::~Animal()
{
}

Animal::Animal(const Animal& other) {
	std::cout << GREEN << "Animal copy constructor called" << RESET << std::endl;
	this->type = other.type;
}

Animal& Animal::operator=(const Animal& other) {
	std::cout << GREEN << "Animal assignment operator called" << RESET << std::endl;
	if (this != &other) {
		this->type = other.type;
	}
	return *this;
}

std::string Animal::getType () const
{
	return(type);
}
