#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;
    
    Dog a;
    Dog b;
    
    
    b = a;
    Cat power;
    Cat morePower(power);

    return 0;
}