#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

#define RED "\033[31m"
#define RESET "\033[0m"
#define GREEN "\033[32m"

class Brain {
private:
	std::string ideas[100];

public:
	Brain();
	~Brain();
	Brain(const Brain& other);             // Constructeur de copie
	Brain& operator=(const Brain& other);  // Opérateur d'assignation

	void setIdea(int index, const std::string& idea);
	std::string getIdea(int index) const;
};

#endif
