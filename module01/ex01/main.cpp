#include "Zombie.hpp"

int main(void)
{
    Zombie *zombiePack = zombieHorde(5, "Calice");

    zombiePack[0].announce();
    zombiePack[1].announce();
    zombiePack[2].announce();
    zombiePack[3].announce();
    zombiePack[4].announce();

    delete [] zombiePack;
    return 0;
}
