#include "AMateria.hpp"

AMateria::AMateria(std::string const& type)
{
    // std::cout << "AMateria parametrize constructor called" << std::endl;
    type2 = type;
}
AMateria::AMateria() : type2("Default_AMateria")
{
    // std::cout << "AMatreia Default Constructor called" << std::endl;
}
AMateria::~AMateria()
{
    // std::cout << "AMatreia Destructor called" << std::endl;
}
AMateria& AMateria::operator=(const AMateria& obj)
{
    // std::cout << "AMadreia assignment operator called" << std::endl;
    (void)obj;
    return *this;
}
AMateria::AMateria(const AMateria& obj)
{
    type2 = obj.type2;   // ضروري تنسخ الـ type
}

std::string const& AMateria::getType() const
{
    return type2;
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}