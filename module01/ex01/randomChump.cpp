#include "Zombie.hpp"

void randomChump( std::string name ){

    Zombie rndmGuy = Zombie(name);
    rndmGuy.announce();
}