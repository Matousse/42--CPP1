#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
}

HumanB::~HumanB()
{
    if (weapon)
        std::cout << RED << name + " was destroyed with their weapon" << RESET << std::endl;
    else
        std::cout << RED << name + " was destroyed and had no weapon" << RESET << std::endl;
}

void HumanB::setWeapon(Weapon& newWeapon)
    {
        weapon = &newWeapon;
    }

void HumanB::attack()
{
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " has no weapon" << std::endl;
}
