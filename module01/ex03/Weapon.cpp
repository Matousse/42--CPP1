#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->type = type;
}

Weapon::~Weapon()
{
    std::cout << RED << "A weapon of type " + type + " was destroyed" << RESET << std::endl;
}

std::string Weapon::getType() const
{
    return (type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}
