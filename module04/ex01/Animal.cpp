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
void Animal::makeSound () const
{
	if (type == "Dogo")
		std::cout << "Waf Waf" << std::endl;
	if (type == "Cat")
		std::cout << "Miaou iou iou" << std::endl;
}
std::string Animal::getType () const
{
	return(type);
}
