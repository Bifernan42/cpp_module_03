#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap() : name_("noname"), hp_(10), ep_(10), ad_(0)
{
	std::cout << "ScavTrap : " << name_ << " : default constructor called\n";
}

ScavTrap::ScavTrap(const std::string name) : name_(name), hp_(10), ep_(10), ad_(0)
{
	std::cout << "ScavTrap : " << name_ << " : constructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap & other)
{
	this->name_ = other.name_;
	std::cout << "ScavTrap : " << name_ << " : copy constructor called\n";
}

ScavTrap & ScavTrap::operator=(const ScavTrap & other)
{
	if (this != &other)
		this->name_ = other.name_;
	std::cout << "ScavTrap :  " << this->name_ << " : copy assignment operator called\n";
	return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap : " << name_ << " : destructor called\n";
}

void	ScavTrap::attack(const std::string& target)
{
	if (!target.empty() && ep_ > 0 && hp_ > 0)
	{
		std::cout << "ScavTrap " << name_ << " attacks " << target << ", causing " << ad_ << " points of damage!" << std::endl;
		this->ep_ -= 1;
	}
}
void ScavTrap::takeDamage(unsigned int amount)
{
	if (this->hp_ > 0)
	{
		std::cout << "ScavTrap " << name_ << " took damage, causing " << amount << " points of damage!" << std::endl;
		if (static_cast<int>(hp_ - amount) <= 0)
		  hp_ = 0;
		else
		  hp_ -= amount;
	}
}
void ScavTrap::beRepaired(unsigned int amount)
{
	if (hp_ > 0 && ep_ > 0)
	{
		hp_ += amount;
		ep_ -= 1;
	}
	std::cout << "ScavTrap " << name_ << " regained " << amount << " hit points!" << std::endl;
}

int ScavTrap::getAd() const
{
    return (ad_);
}
int ScavTrap::getEp() const
{
    return (ep_);
}
int ScavTrap::getHp() const
{
    return (hp_);
}

void ScavTrap::setName(const std::string & name)
{
    std::cout << "ScavTrap: name '" << name_ << "' set to '" << name << "'\n";
    name_ = name;
}
