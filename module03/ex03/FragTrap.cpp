#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << GREEN << "FragTrap Standard Constructor called" << RESET << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << GREEN << "FragTrap With String Constructor called" << RESET << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << RED << "FragTrap Destructor called" << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    return *this;
}

void FragTrap::attack(const std::string& target)
{
    if (hitPoints == 0)
    {
        std::cout << "FragTrap is likely dead and cannot do any action :/" << std::endl;
        return;
    }
    if (energyPoints == 0)
    {
        std::cout << "FragTrap has no energy left, thus cannot do any action" << std::endl;
        return;
    }
    energyPoints -= 1;
    std::cout << "FragTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFiveGuys()
{
    if (hitPoints == 0)
    {
        std::cout << "FragTrap is dead and cannot high five anymore :/" << std::endl;
        return;
    }
    if (energyPoints == 0)
    {
        std::cout << "FragTrap has no energy left to make a high five" << std::endl;
        return;
    }
    std::cout << "FragTrap " << name << " sends a positive high five request." << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
    if (hitPoints == 0)
    {
        std::cout << "FragTrap is likely dead and cannot do any action :/" << std::endl;
        return;
    }
    if (energyPoints == 0)
    {
        std::cout << "FragTrap has no energy left, thus cannot do any action" << std::endl;
        return;
    }
    hitPoints += amount;
    energyPoints -= 1;
    std::cout << "FragTrap " << name << " was healed of " << amount << " HP and now has " << hitPoints << " HP." << std::endl;
}
