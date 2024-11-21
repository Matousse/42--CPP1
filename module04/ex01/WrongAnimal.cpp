#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << GREEN << "A strange beast has awoken" << RESET << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << RED << "WrongAnimal destructor called" << RESET << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "BLURK !!!" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return type;
}
