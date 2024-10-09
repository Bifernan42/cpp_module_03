#include "../includes/ClapTrap.hpp"

int main(void)
{
    ClapTrap trap1("Bob");
    ClapTrap trap2("Bobby");

    trap2.attack("Bob");
    trap1.takeDamage(0);

    std::cout << "\nLet's try to break bob\n";

    trap1.takeDamage(1000);
    std::cout << "Bob has now " << trap1.getHp() << " Hp\n";
    for (int i = 0; i < 15 ; ++i)
        trap1.beRepaired(1);
    std::cout << "Bob has now " << trap1.getHp() << " Hp\n";
    return (0);
}
