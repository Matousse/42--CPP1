#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

#define RED "\033[31m"
#define RESET "\033[0m"
#define GREEN "\033[32m"

class Animal
{
protected:
	std::string type;
public:
	Animal();
	virtual ~Animal();
	
	Animal(const Animal& other);
	Animal& operator=(const Animal& other);

	virtual void makeSound() const;
	std::string getType() const;
};

#endif
