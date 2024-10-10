#include "../includes/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("noname", 100, 50, 20)
{
	std::cout << "FragTrap : " << this->getName() << " : default constructor called\n";
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "FragTrap : " << this->getName() << " : constructor called\n";
}

FragTrap::FragTrap(const FragTrap & other)
{
	this->setName(other.getName());
	this->setHp(other.getHp());
	this->setEp(other.getEp());
	this->setAd(other.getAd());
    std::cout << "FragTrap : " << this->getName() << " : copy constructor called\n";
}

FragTrap & FragTrap::operator=(const FragTrap & other)
{
	if (this != &other)
	{
	   this->setName(other.getName());
	   this->setHp(other.getHp());
	   this->setEp(other.getEp());
	   this->setAd(other.getAd());
	}
	std::cout << "FragTrap :  " << this->getName() << " : copy assignment operator called\n";
	return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap : " << this->getName() << " : destructor called\n";
}

void	FragTrap::attack(const std::string& target)
{
	if (!target.empty() && this->getEp() > 0 && this->getHp() > 0)
	{
		std::cout << "FragTrap " << this->getName() << " attacks " << target << ", causing " << this->getAd() << " points of damage!" << std::endl;
		this->setEp(this->getEp() - 1);
	}
}
void FragTrap::takeDamage(unsigned int amount)
{
	if (this->getHp() > 0)
	{
		if (static_cast<int>(this->getHp() - amount) <= 0)
		  this->setHp(0);
		else
		  this->setHp(getHp() - amount);
		std::cout << "FragTrap " << this->getName() << " took damage, causing " << amount << " points of damage!" << std::endl;
	}
}
void FragTrap::beRepaired(unsigned int amount)
{
	if (this->getEp() > 0)
	{
		this->setHp(this->getHp() + amount);
		this->setEp(this->getEp() - 1);
	}
	std::cout << "FragTrap " << this->getName() << " regained " << amount << " hit points!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->getName() << " asks for a high five !\n";
}
