#include "Character.hpp"

Character::Character(std::string name, const std::string RPGClass) 
: m_name(name), m_RPGClass(RPGClass), m_life(50), m_agility(2), m_strength(2), m_wit(2){}

std::string Character::getName()
{
    return m_name;
}

int Character::getLife()
{
    return m_life;
}

int Character::getAgility()
{
    return m_agility;
}

int Character::getStrength()
{
    return m_strength;
}

int Character::getWit()
{
    return m_wit;
}

const std::string Character::getRPGClass()
{
    return m_RPGClass;
}