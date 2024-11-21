#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hitPoints(10), energyPoints (10), attackDamage(0)
{
	std::cout << "Standard Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : hitPoints(10), energyPoints (10), attackDamage(0)
{
	std::cout << "With String	 Constructor called" << std::endl;
	this->name = name;
}

ClapTrap::~ClapTrap()
{
	std::cout << RED << "Destructor called" << RESET << std::endl;
}


void ClapTrap::attack(const std::string& target)
{

	if (hitPoints == 0)
	{
		std::cout << "ClapTrap is likely dead and cannot do any action :/" << std::endl;
		return;
	}
	if (energyPoints == 0)
	{
		std::cout << "ClapTrap has no energy left, thus cannot do any action" << std::endl;
		return;
	}
	energyPoints -= 1;
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints == 0)
	{
		std::cout << "ClapTrap is already dead, COULD YOU PLEASE STOP IT ?" << std::endl;
		return;
	}
	if ((hitPoints - amount) <= 0)
		hitPoints = 0;
	else
		hitPoints -= amount;
	std::cout << "ClapTrap " << name << " just took " <<  amount << " points of damage! " << hitPoints << " HP left." << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints == 0)
	{
		std::cout << "ClapTrap is likely dead and cannot do any action :/" << std::endl;
		return;
	}
	if (energyPoints == 0)
	{
		std::cout << "ClapTrap has no energy left, thus cannot do any action" << std::endl;
		return;
	}
	hitPoints += amount;
	energyPoints -= 1;
	std::cout << "ClapTrap " << name << " was healed of " << amount << " HP and now has " << hitPoints << " HP." << std::endl;
}

// et au cas ou

ClapTrap::ClapTrap(const ClapTrap& other)
    : name(other.name), hitPoints(other.hitPoints),
      energyPoints(other.energyPoints), attackDamage(other.attackDamage)
{
    std::cout << "Copy constructor called" << std::endl;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
    {
        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    return *this;
}
