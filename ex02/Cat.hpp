#ifndef Cat_HPP 
#define Cat_HPP

#include <iostream>
#include "AAnimal.hpp"
class Cat : public AAnimal
{
    public:
        Cat();
        ~Cat();
        Cat(const Cat& obj);
        Cat &operator=(const Cat& obj);
        void makeSound() const;
        void set_type(std::string n);
        std::string gettype(void) const;
};

#endif