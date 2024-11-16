#include "Zombie.hpp"


void Zombie::announce( void ){
    
    std::cout << name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name) {
    this->name = name;
}

Zombie::~Zombie() {
    std::cout << name + " was destroyed" << std::endl;
}
