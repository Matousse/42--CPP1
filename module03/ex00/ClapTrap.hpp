#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#define RED "\033[31m"
#define RESET "\033[0m"

#include <iostream>
#include <string>

class ClapTrap
{
private:
	std::string name;
	int hitPoints;
	int energyPoints;
	int attackDamage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(const ClapTrap& other);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	ClapTrap& operator=(const ClapTrap& other);
};

#endif
