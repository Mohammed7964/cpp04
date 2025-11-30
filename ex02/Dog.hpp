#ifndef DOG_HPP 
#define DOG_HPP

#include <iostream>
#include "AAnimal.hpp"
class Dog : public AAnimal
{
    public:
        Dog();
        ~Dog();
        Dog(const Dog& obj);
        Dog &operator=(const Dog& obj);
        void makeSound() const;
        void set_type(std::string n);
        std::string gettype(void) const;
};

#endif