#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        virtual ~WrongAnimal();
        WrongAnimal(const WrongAnimal& obj);
        WrongAnimal &operator=(const WrongAnimal& obj);
        void makeSound() const;
        void set_type(std::string n);
        std::string gettype(void) const;
};
#endif