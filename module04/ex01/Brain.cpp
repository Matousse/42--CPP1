#include "Brain.hpp"

Brain::Brain()
{
	std::cout << GREEN << "A new brain starts thinking" << RESET << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = "Empty thought";
}

Brain::~Brain()
{
	std::cout << RED << "A brain stops thinking" << RESET << std::endl;
}

Brain::Brain(const Brain& other)
{
	std::cout << GREEN << "Brain copy constructor called" << RESET << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << GREEN << "Brain assignment operator called" << RESET << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = other.ideas[i];
	}
	return (*this);
}

void Brain::setIdea(int index, const std::string& idea)
{
	if (index >= 0 && index < 100)
		ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
	if (index >= 0 && index < 100)
		return ideas[index];
	return "Invalid index";
}
