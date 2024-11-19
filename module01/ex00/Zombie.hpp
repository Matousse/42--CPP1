#include <string>
#include <iostream>

#define RED "\033[31m"
#define RESET "\033[0m"

class Zombie
{
private:

    std::string name;

public:

    Zombie(std::string name);
    ~Zombie();
    void announce( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
