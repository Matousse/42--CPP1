#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public virtual ScavTrap, public virtual FragTrap {
private:
    std::string name;

protected:
    virtual std::string getType() const { return "DiamondTrap"; }

public:
    DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap& other);
    virtual ~DiamondTrap();

    DiamondTrap& operator=(const DiamondTrap& other);
    void whoAmI();
    using ScavTrap::attack;
};

#endif
