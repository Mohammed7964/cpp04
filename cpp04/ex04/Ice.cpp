#include "Ice.hpp"

Ice::Ice() : AMateria("Default_Ice")
{
    std::cout << "Ice default constructor called" << std::endl;
}
Ice::~Ice()
{
    std::cout << "Ice Destructor called" << std::endl;
}
Ice& Ice::operator=(const Ice& obj)
{
    std::cout << "Ice assignment operator called" << std::endl;
    (void)obj;
    return *this;
}
Ice::Ice(const Ice& obj)
{
    std::cout << "Ice copy constructor called" << std::endl;
    *this = obj;
}
AMateria* Ice::clone() const
{
    return (new Ice(*this));
}
void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}