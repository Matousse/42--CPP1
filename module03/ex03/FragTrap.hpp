#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
protected:

    virtual std::string getType() const { return "FragTrap"; }

public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap& other);
    ~FragTrap();

    FragTrap& operator=(const FragTrap& other);

    void attack(const std::string& target);
    void highFiveGuys();
    void beRepaired(unsigned int amount);

};

#endif
