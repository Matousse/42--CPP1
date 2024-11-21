#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << GREEN << "ScavTrap Standard Constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << GREEN << "ScavTrap With String Constructor called" << RESET << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << RED << "ScavTrap Destructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if (hitPoints == 0)
    {
        std::cout << "ScavTrap is likely dead and cannot do any action :/" << std::endl;
        return;
    }
    if (energyPoints == 0)
    {
        std::cout << "ScavTrap has no energy left, thus cannot do any action" << std::endl;
        return;
    }
    energyPoints -= 1;
    std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    if (hitPoints == 0)
    {
        std::cout << "ScavTrap is dead and cannot guard anything :/" << std::endl;
        return;
    }
    if (energyPoints == 0)
    {
        std::cout << "ScavTrap has no energy left to guard the gate" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (hitPoints == 0)
    {
        std::cout << "ScavTrap is likely dead and cannot do any action :/" << std::endl;
        return;
    }
    if (energyPoints == 0)
    {
        std::cout << "ScavTrap has no energy left, thus cannot do any action" << std::endl;
        return;
    }
    hitPoints += amount;
    energyPoints -= 1;
    std::cout << "ScavTrap " << name << " was healed of " << amount << " HP and now has " << hitPoints << " HP." << std::endl;
}
