#include "Animal.hpp"

Animal::Animal() : type("Default_Animal")
{
    std::cout << "Animal Default Constructor called" << std::endl;
}
Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}
Animal::Animal(const Animal& obj)
{
    std::cout << "Animal copy Constructor called" << std::endl;
    *this = obj;
}
Animal& Animal::operator=(const Animal& obj)
{
    std::cout << "Animal copy assignment operator called" << std::endl;
    if (this != &obj)
        type = obj.type;
    return *this;
}

void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}
void Animal::set_type(std::string n)
{
    type = n;
}
std::string Animal::gettype(void) const
{
    return type;
}