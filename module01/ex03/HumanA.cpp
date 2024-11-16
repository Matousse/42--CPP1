#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& initialWeapon) : weapon(initialWeapon), name(name)
{

}

HumanA::~HumanA()
{
    
}

void HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}