#include "TestCharacter.hpp"


int main()
{
    Character *perso = new TestCharacter("Jean-Luc");
    std::cout << perso->getName() << std::endl;
    std::cout << perso->getLife() << std::endl;
    std::cout << perso->getAgility() << std::endl;
    std::cout << perso->getStrength() << std::endl;
    std::cout << perso->getWit() << std::endl;
    std::cout << perso->getRPGClass() << std::endl;
    perso->attack("Jean-Luc");
    return (0);
}