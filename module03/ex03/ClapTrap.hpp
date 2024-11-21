#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#define RED "\033[31m"
#define RESET "\033[0m"
#define GREEN "\033[32m"

#include <iostream>
#include <string>

class ClapTrap
{
protected:
	std::string name;
	int hitPoints;
	int energyPoints;
	int attackDamage;

	virtual std::string getType() const { return "ClapTrap"; }
	
public:
	ClapTrap();
	ClapTrap(std::string name);
	virtual ~ClapTrap();
	ClapTrap(const ClapTrap& other);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	ClapTrap& operator=(const ClapTrap& other);
};

#endif
