#ifndef ANIMAL_HPP 
#define ANIMAL_HPP

#include <iostream>

class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal();
        virtual ~AAnimal();
        AAnimal(const AAnimal& obj);
        AAnimal &operator=(const AAnimal& obj);
        virtual void makeSound() const = 0;
        void set_type(std::string n);
        std::string gettype(void) const;

};

#endif