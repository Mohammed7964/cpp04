#include "Brain.hpp"

Brain::Brain()
{
    int i = 0;
    while (i < 100)
    {
        ideas[i] = "default_idea";
        i++;
    }
    std::cout << "Brain Default Constructor called" << std::endl;
}
Brain::Brain(const Brain& obj)
{
    int i = 0;
    while (i < 100)
    {
        ideas[i] = obj.ideas[i];
        i++;
    }
    std::cout << "Brain copy Constructor called" << std::endl;
}
Brain& Brain::operator=(const Brain& obj)
{
    if (this != &obj)
    {
        int i = 0;
        while (i < 100)
        {
            ideas[i] = obj.ideas[i];
            i++;
        }
    }
    std::cout << "Brain copy assignment operator called" << std::endl;
    return *this;
}
Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}