#include "Cat.hpp"

Cat::Cat()
{
	this-> type = "Cat";
	std::cout << GREEN<< "A little kitty was just born" <<  RESET << std::endl;
}

Cat::~Cat()
{
	std::cout << RED << "And so the kitty goes ..." <<  RESET << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &other) {
		Animal::operator=(other);
	}
	return *this;
}
