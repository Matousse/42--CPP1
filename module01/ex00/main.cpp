#include "Zombie.hpp"

int main(void)
{
    Zombie *heapZombie = newZombie("Jojo");
    randomChump("Toto");

    heapZombie->announce();
    delete heapZombie;

    return 0;
}