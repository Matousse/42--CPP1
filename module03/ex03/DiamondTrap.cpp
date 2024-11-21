#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() :
    ClapTrap("_clap_name"),
    ScavTrap(),
    FragTrap()
{
    ClapTrap::name = "_clap_name";
    hitPoints = FragTrap::hitPoints;
    energyPoints = ScavTrap::energyPoints;
    attackDamage = FragTrap::attackDamage;
    std::cout << GREEN << "DiamondTrap Standard Constructor called" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) :
    ClapTrap(name + "_clap_name"),
    ScavTrap(),
    FragTrap(),
    name(name)
{
    ClapTrap::name = name + "_clap_name";
    hitPoints = FragTrap::hitPoints;
    energyPoints = ScavTrap::energyPoints;
    attackDamage = FragTrap::attackDamage;
    std::cout << GREEN << "DiamondTrap Named Constructor called" << RESET << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << RED << "DiamondTrap Destructor called" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) :
    ClapTrap(other),
    ScavTrap(other),
    FragTrap(other)
{
    *this = other;
    std::cout << "DiamondTrap Copy Constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    if (this != &other)
    {
        ScavTrap::operator=(other);
        FragTrap::operator=(other);
        this->name = other.name;
    }
    return *this;
}

void DiamondTrap::whoAmI()
{
    std::cout << "I am " << this->name << " and my ClapTrap name is " << ScavTrap::name << std::endl;
}
