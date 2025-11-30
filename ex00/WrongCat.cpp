#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat Default Constructor called" << std::endl;
}
WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
}
WrongCat::WrongCat(const WrongCat& obj) : WrongAnimal(obj)
{
    std::cout << "WrongCat copy Constructor called" << std::endl;
    *this = obj;
}
WrongCat& WrongCat::operator=(const WrongCat& obj)
{
    std::cout << "WrongCat copy assignment operator called" << std::endl;
    if (this != &obj)
        type = obj.type;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat sound" << std::endl;
}
void WrongCat::set_type(std::string n)
{
    type = n;
}
std::string WrongCat::gettype(void) const
{
    return type;
}