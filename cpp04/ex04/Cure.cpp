#include "Cure.hpp"

Cure::Cure() : AMateria("Default_Cure")
{
    std::cout << "Cure default constructor called" << std::endl;
}
Cure::~Cure()
{
    std::cout << "Cure Destructor called" << std::endl;
}
Cure& Cure::operator=(const Cure& obj)
{
    std::cout << "Cure assignment operator called" << std::endl;
    (void)obj;
    return *this;
}
Cure::Cure(const Cure& obj)
{
    std::cout << "Cure copy constructor called" << std::endl;
    *this = obj;
}
AMateria* Cure::clone() const
{
    return (new Cure(*this));
}
void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}