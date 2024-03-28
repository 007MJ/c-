#include "Dog.hpp"

void Dog::makeSound() const {
    cout << "Ouaf ouaf ouaf ouaf ouaf ouaf " << endl;
}

Dog::Dog() : Animal("Dog"){
    cout << "------------------------" << endl;
    cout << "Dog Default constructor" << endl;
    cout << "------------------------" << endl;
}


Dog::~Dog(){
    cout << "---------------------------------" << endl;
    cout << "Dog Default Desconstuctor" << endl;
    cout << "---------------------------------" << endl;
}