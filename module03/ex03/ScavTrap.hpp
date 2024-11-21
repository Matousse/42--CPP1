#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
protected:

    virtual std::string getType() const { return "ScavTrap"; }

public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& other);
    ~ScavTrap();

    ScavTrap& operator=(const ScavTrap& other);

    void attack(const std::string& target);
    void guardGate();
    void beRepaired(unsigned int amount);

};

#endif
