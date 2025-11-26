#include "Cat.hpp"
Cat::Cat() : Animal()
{
    type = "Cat";
    std::cout << "Cat Default Constructor called" << std::endl;
}
Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}
Cat::Cat(const Cat& obj) : Animal(obj)
{
    std::cout << "Cat copy Constructor called" << std::endl;
    *this = obj;
}
Cat& Cat::operator=(const Cat& obj)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &obj)
        type = obj.type;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Cat sound" << std::endl;
}
void Cat::set_type(std::string n)
{
    type = n;
}
std::string Cat::gettype(void) const
{
    return type;
}