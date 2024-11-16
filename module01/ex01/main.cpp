#include "Zombie.hpp"

int main(void)
{
    Zombie *heapZombie = newZombie("Jojo");
    randomChump("Toto");

    heapZombie->announce();
    delete heapZombie;

    Zombie *zombiePack = zombieHorde(5, "Calice");
    
    zombiePack[0].announce();
    zombiePack[4].announce();
    
    delete [] zombiePack;
    return 0;
}