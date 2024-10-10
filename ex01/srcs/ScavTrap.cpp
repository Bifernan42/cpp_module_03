#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("noname", 100, 50, 20)
{
	std::cout << "ScavTrap : " << this->getName() << " : default constructor called\n";
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap : " << this->getName() << " : constructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap & other)
{
	this->setName(other.getName());
	this->setHp(other.getHp());
	this->setEp(other.getEp());
	this->setAd(other.getAd());
    std::cout << "ScavTrap : " << this->getName() << " : copy constructor called\n";
}

ScavTrap & ScavTrap::operator=(const ScavTrap & other)
{
	if (this != &other)
	{
	   this->setName(other.getName());
	   this->setHp(other.getHp());
	   this->setEp(other.getEp());
	   this->setAd(other.getAd());
	}
	std::cout << "ScavTrap :  " << this->getName() << " : copy assignment operator called\n";
	return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap : " << this->getName() << " : destructor called\n";
}

void ScavTrap::guardGate() const
{
    std::cout << "ScavTrap: " << this->getName() << " is now in Gate keeper mode\n";
}

void	ScavTrap::attack(const std::string& target)
{
	if (!target.empty() && this->getEp() > 0 && this->getHp() > 0)
	{
		std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAd() << " points of damage!" << std::endl;
		this->setEp(this->getEp() - 1);
	}
}
void ScavTrap::takeDamage(unsigned int amount)
{
	if (this->getHp() > 0)
	{
		if (static_cast<int>(this->getHp() - amount) <= 0)
		  this->setHp(0);
		else
		  this->setHp(getHp() - amount);
		std::cout << "ScavTrap " << this->getName() << " took damage, causing " << amount << " points of damage!" << std::endl;
	}
}
void ScavTrap::beRepaired(unsigned int amount)
{
	if (this->getEp() > 0)
	{
		this->setHp(this->getHp() + amount);
		this->setEp(this->getEp() - 1);
	}
	std::cout << "ScavTrap " << this->getName() << " regained " << amount << " hit points!" << std::endl;
}
