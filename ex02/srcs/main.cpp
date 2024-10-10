#include "../includes/FragTrap.hpp"

int main(void)
{
    FragTrap trap1("Tom");
    FragTrap trap2("Tommy");

    trap2.attack("Tom");
    trap1.takeDamage(20);
    trap1.highFivesGuys();
    std::cout << "Tom has now " << trap1.getHp() << " hit points !\n";

    std::cout << "\nLet's try to break Tom\n";

    trap1.takeDamage(1000);
    std::cout << "Tom has now " << trap1.getHp() << " Hp\n";
    for (int i = 0; i < 15 ; ++i)
        trap1.beRepaired(1);
    std::cout << "Tom has now " << trap1.getHp() << " Hp\n";
    return (0);
}
