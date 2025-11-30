#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongCat();
        virtual ~WrongCat();
        WrongCat(const WrongCat& obj);
        WrongCat &operator=(const WrongCat& obj);
        void makeSound() const;
        void set_type(std::string n);
        std::string gettype(void) const;
};
#endif