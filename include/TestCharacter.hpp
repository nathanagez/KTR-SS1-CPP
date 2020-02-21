#ifndef __TEST_CHARACTER__
#define __TEST_CHARACTER__
#include "Character.hpp"

class TestCharacter : public Character
{
public:
    TestCharacter(std::string name);
    void attack(std::string notUsed);
};

#endif