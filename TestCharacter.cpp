#include "TestCharacter.hpp"

TestCharacter::TestCharacter(std::string name)
    : Character::Character(name) {}

void TestCharacter::attack(std::string notUsed)
{
    (void)notUsed;
    std::cout << m_name << ": Rrrrrrrrr...." << std::endl;
}