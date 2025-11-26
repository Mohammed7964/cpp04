#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Default_WrongAnimal")
{
    std::cout << "WrongAnimal Default Constructor called" << std::endl;
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
    std::cout << "WrongAnimal copy Constructor called" << std::endl;
    *this = obj;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
    std::cout << "WrongAnimal copy assignment operator called" << std::endl;
    if (this != &obj)
        type = obj.type;
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound" << std::endl;
}
void WrongAnimal::set_type(std::string n)
{
    type = n;
}
std::string WrongAnimal::gettype(void) const
{
    return type;
}