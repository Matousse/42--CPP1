#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dogo";
	std::cout << GREEN << "A good little dog was just born" << RESET << std::endl;
	brain = new Brain();
}

Dog::~Dog()
{
	std::cout << RED << "I'll just go wouf somewhere else !" << RESET << std::endl;
	delete brain;
}

Dog::Dog(const Dog& other) : Animal(other) {
	std::cout << "Dog copy constructor called" << std::endl;
	brain = new Brain(*other.brain);  // Copie profonde
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &other) {
		Animal::operator=(other);
		delete brain;
		brain = new Brain(*other.brain);  // Copie profonde
	}
	return (*this);
}

Brain* Dog::getBrain() const {
	return brain;
}

void Dog::makeSound() const
{
	std::cout << "Waf Waf" << std::endl;
}
