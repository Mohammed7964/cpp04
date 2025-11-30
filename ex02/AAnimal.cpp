#include "AAnimal.hpp"

AAnimal::AAnimal() : type("Default_AAnimal")
{
    std::cout << "AAnimal Default Constructor called" << std::endl;
}
AAnimal::~AAnimal()
{
    std::cout << "AAnimal Destructor called" << std::endl;
}
AAnimal::AAnimal(const AAnimal& obj)
{
    std::cout << "AAnimal copy Constructor called" << std::endl;
    *this = obj;
}
AAnimal& AAnimal::operator=(const AAnimal& obj)
{
    std::cout << "AAnimal copy assignment operator called" << std::endl;
    if (this != &obj)
        type = obj.type;
    return *this;
}

void AAnimal::makeSound() const
{
    std::cout << "AAnimal sound" << std::endl;
}
void AAnimal::set_type(std::string n)
{
    type = n;
}
std::string AAnimal::gettype(void) const
{
    return type;
}