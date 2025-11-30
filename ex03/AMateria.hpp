#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"
class ICharacter;

 class AMateria
 {
 protected:
    std::string type2;
 public:
 AMateria(std::string const & type);
 AMateria();
 ~AMateria();
 AMateria& operator=(const AMateria& obj);
 AMateria(const AMateria& obj);
 std::string const & getType() const; //Returns the materia type
 virtual AMateria* clone() const = 0;
 virtual void use(ICharacter& target);
 };
#endif