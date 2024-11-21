#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dogo";
	std::cout << GREEN << "A good little dog was just born" << RESET << std::endl;
}

Dog::~Dog()
{
	std::cout << RED << "I'll just go wouf somewhere else !" << RESET << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &other) {
		Animal::operator=(other);
	}
	return *this;
}
