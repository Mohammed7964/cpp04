#include "Dog.hpp"

Dog::Dog() : Animal()
{
    type = "Dog";
    std::cout << "Dog Default Constructor called" << std::endl;
}
Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
}
Dog::Dog(const Dog& obj) : Animal(obj)
{
    std::cout << "Dog copy Constructor called" << std::endl;
    *this = obj;
}
Dog& Dog::operator=(const Dog& obj)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this != &obj)
        type = obj.type;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Dog sound" << std::endl;
}
void Dog::set_type(std::string n)
{
    type = n;
}
std::string Dog::gettype(void) const
{
    return type;
}