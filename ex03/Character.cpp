#include "Character.hpp"

Character::Character() : _name("default"), _dropCount(0)
{
    for (int i = 0; i < 4; i++)
        _inventory[i] = 0;
    for (int i = 0; i < 100; i++)
        _dropped[i] = 0;
}

Character::Character(std::string const& name) : _name(name), _dropCount(0)
{
    for (int i = 0; i < 4; i++)
        _inventory[i] = 0;
    for (int i = 0; i < 100; i++)
        _dropped[i] = 0;
}

Character::Character(const Character& other) : _name(other._name), _dropCount(0)
{
    for (int i = 0; i < 4; i++)
    {
        if (other._inventory[i])
            _inventory[i] = other._inventory[i]->clone();
        else
            _inventory[i] = 0;
    }
}

Character& Character::operator=(const Character& other)
{
    if (this != &other)
    {
        _name = other._name;

        for (int i = 0; i < 4; i++)
        {
            delete _inventory[i];
            _inventory[i] = 0;
        }

        for (int i = 0; i < 4; i++)
        {
            if (other._inventory[i])
                _inventory[i] = other._inventory[i]->clone();
        }
    }
    return *this;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        delete _inventory[i];

    for (int i = 0; i < _dropCount; i++)
        delete _dropped[i];
}

std::string const & Character::getName() const
{
    return _name;
}

void Character::equip(AMateria* m)
{
    if (!m) return;
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i] == NULL)
        {
            _inventory[i] = m;
            return;
        }
    }
}


void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
        return;
    if (_inventory[idx] == 0)
        return;

    _dropped[_dropCount++] = _inventory[idx]; // نخزن باش مانسربيوهش
    _inventory[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3)
        return;
    if (_inventory[idx] == 0)
        return;

    _inventory[idx]->use(target);
}
