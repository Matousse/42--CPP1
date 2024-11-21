#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

#define RED "\033[31m"
#define RESET "\033[0m"
#define GREEN "\033[32m"

class WrongAnimal
{
protected:
	std::string type;

public:
	WrongAnimal();
	~WrongAnimal();

	void makeSound() const;
	std::string getType() const;
};

#endif
