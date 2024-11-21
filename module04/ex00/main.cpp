#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound();
j->makeSound();
meta->makeSound();

delete meta;
delete j;
delete i;

const WrongAnimal* wrong_animal = new WrongAnimal();
const WrongAnimal* wrong_cat = new WrongCat();
const WrongCat* direct_wrong_cat = new WrongCat();

std::cout << "get Type on wrong_animal : " << wrong_animal->getType() << std::endl;
std::cout << "get Type on pointer on wrong_cat : " << wrong_cat->getType() << std::endl;
std::cout << "get Type on wrong_cat : " << direct_wrong_cat->getType() << std::endl;

std::cout << "pointer on wrong_animal says: ";
wrong_animal->makeSound();
std::cout << "pointer on wrong_cat says: ";
wrong_cat->makeSound();
std::cout << "wrong_cat says: ";
direct_wrong_cat->makeSound();



delete direct_wrong_cat;
delete wrong_cat;
delete wrong_animal;

return (0);
}
