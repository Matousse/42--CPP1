#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << GREEN << "WrongCat constructor called" << RESET << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << RED << "WrongCat destructor called" << RESET << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "MiEEEEEURK!!" << std::endl;
}
