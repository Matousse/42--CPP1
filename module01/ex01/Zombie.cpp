#include "Zombie.hpp"


void Zombie::announce( void ){

    std::cout << name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie() {

}

Zombie::Zombie(std::string name) {
    this->name = name;
}

Zombie::~Zombie() {
    std::cout << RED << name + " was destroyed" << RESET << std::endl;
}

void Zombie::setName(std::string name) {
    this->name = name;
}


