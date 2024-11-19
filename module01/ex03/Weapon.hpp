#ifndef WEAPON_HPP
#define WEAPON_HPP

#define RED "\033[31m"
#define RESET "\033[0m"

#include <string>
#include <iostream>

class Weapon
{
private:
    std::string type;
public:

    Weapon(std::string type);
    ~Weapon();

    std::string getType() const;
    void setType(std::string type);
};

#endif
