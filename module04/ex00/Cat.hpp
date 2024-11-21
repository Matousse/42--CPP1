#include "Animal.hpp"

class Cat : public Animal
{
private:

public:
	Cat();
	~Cat();
	Cat(const Cat& other);
	Cat& operator=(const Cat& other);

};



