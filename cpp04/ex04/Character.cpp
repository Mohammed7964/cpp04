#include "Character.hpp"

Character::Character()
{
    name = "default";
    for (int i = 0; i < 4; i++)
    {
        inventory[i] = nullptr;
        droped[i] = nullptr;
    }
    dropedcount = 0;
}
Character::Character(std::string const &n)
{
    name = n;
    for (int i = 0; i < 4; i++)
    {
        inventory[i] = nullptr;
        droped[i] = nullptr;
    }
    dropedcount = 0;
}
Character::Character(const Character &other)
{
    name = other.name;
    dropedcount = 0;
    for (int i = 0; i < 4; i++)
    {
        droped[i] = nullptr;
        if (other.inventory[i])
            inventory[i] = other.inventory[i]->clone();
        else
            inventory[i] = nullptr;
    }
}
Character &Character::operator=(const Character &other)
{
    if (this == &other)
        return *this;

    // Delete old inventory
    for (int i = 0; i < 4; i++)
        if (inventory[i])
            delete inventory[i];

    name = other.name;

    for (int i = 0; i < 4; i++)
    {
        if (other.inventory[i])
            inventory[i] = other.inventory[i]->clone();
        else
            inventory[i] = nullptr;
    }

    dropedcount = 0;
    for (int i = 0; i < 4; i++)
        droped[i] = nullptr;

    return *this;
}
Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i])
            delete inventory[i];
        if (droped[i])
            delete droped[i];
    }
}
