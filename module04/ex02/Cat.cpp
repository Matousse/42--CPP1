#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
	this-> type = "Cat";
	brain = new Brain();
	std::cout << GREEN<< "A little kitty was just born" <<  RESET << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << RED << "And so the kitty goes ..." <<  RESET << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "Cat copy constructor called" << std::endl;
	brain = new Brain(*other.brain);  // Copie profonde
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		delete brain;
		brain = new Brain(*other.brain);  // Copie profonde
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miaou iou iou" << std::endl;
}
