#include "../includes/ScavTrap.hpp"

int main(void)
{
    ScavTrap trap1("John");
    ScavTrap trap2("Johnny");

    trap2.attack("John");
    trap1.takeDamage(20);
    trap1.guardGate();

    std::cout << "John has now " << trap1.getHp() << " hit points !\n";

    std::cout << "\nLet's try to break John\n";

    trap1.takeDamage(1000);
    std::cout << "John has now " << trap1.getHp() << " Hp\n";
    for (int i = 0; i < 15 ; ++i)
        trap1.beRepaired(1);
    std::cout << "John has now " << trap1.getHp() << " Hp\n";
    return (0);
}
