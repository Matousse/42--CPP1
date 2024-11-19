#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& initialWeapon) : weapon(initialWeapon), name(name)
{

}

HumanA::~HumanA()
{
    std::cout << RED << name + " was destroyed with their weapon" << RESET << std::endl;
}

void HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
