#ifndef __CHARACTER__
#define __CHARACTER__
#include <iostream>
#include <string>

class Character
{
public:
    Character(std::string name, const std::string RPGClass= "Character");
    std::string getName();
    const std::string getRPGClass();
    int getLife();
    int getAgility();
    int getStrength();
    int getWit();
    virtual void attack(std::string notUsed) = 0;
    virtual ~Character(){};

protected:
    std::string m_name;
    const std::string m_RPGClass;
    int m_life;
    int m_agility;
    int m_strength;
    int m_wit;
};

#endif