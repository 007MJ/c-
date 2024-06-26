#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* dog_j = new Dog();
    const Animal* cat_i = new Cat();
    std::cout << "now cat sound -> " ;
    std::cout << cat_i->getType() << " -> ";
    cat_i->makeSound(); //will output the cat sound!
    std::cout << dog_j->getType() << " -> ";
    dog_j->makeSound();
    meta->makeSound();


    delete meta;
    delete cat_i;
    delete dog_j;
    cout << "|||||||||||||||||||||||||||||||||||||||||| Every thing go wrong ||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
    const WrongAnimal* met = new WrongAnimal();
    const WrongAnimal *wrong_jj = new WRONGCat();

    std::cout << wrong_jj->getType() << " -> ";
    met->makeSound();

    Dog dog_a;
    Dog dog_b;

    dog_a = dog_b;
    delete met;
    delete wrong_jj;
}