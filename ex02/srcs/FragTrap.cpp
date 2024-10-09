#include "../includes/FragTrap.hpp"

FragTrap::FragTrap() : name_("noname"), hp_(10), ep_(10), ad_(0)
{
	std::cout << "FragTrap : " << name_ << " : default constructor called\n";
}

FragTrap::FragTrap(const std::string name) : name_(name), hp_(10), ep_(10), ad_(0)
{
	std::cout << "FragTrap : " << name_ << " : constructor called\n";
}

FragTrap::FragTrap(const FragTrap & other)
{
	this->name_ = other.name_;
	std::cout << "FragTrap : " << name_ << " : copy constructor called\n";
}

FragTrap & FragTrap::operator=(const FragTrap & other)
{
	if (this != &other)
		this->name_ = other.name_;
	std::cout << "FragTrap :  " << this->name_ << " : copy assignment operator called\n";
	return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap : " << name_ << " : destructor called\n";
}

void	FragTrap::attack(const std::string& target)
{
	if (!target.empty() && ep_ > 0 && hp_ > 0)
	{
		std::cout << "FragTrap " << name_ << " attacks " << target << ", causing " << ad_ << " points of damage!" << std::endl;
		this->ep_ -= 1;
	}
}
void FragTrap::takeDamage(unsigned int amount)
{
	if (this->hp_ > 0)
	{
		std::cout << "FragTrap " << name_ << " took damage, causing " << amount << " points of damage!" << std::endl;
		if (static_cast<int>(hp_ - amount) <= 0)
		  hp_ = 0;
		else
		  hp_ -= amount;
	}
}
void FragTrap::beRepaired(unsigned int amount)
{
	if (hp_ > 0 && ep_ > 0)
	{
		hp_ += amount;
		ep_ -= 1;
	}
	std::cout << "FragTrap " << name_ << " regained " << amount << " hit points!" << std::endl;
}

int FragTrap::getAd() const
{
    return (ad_);
}
int FragTrap::getEp() const
{
    return (ep_);
}
int FragTrap::getHp() const
{
    return (hp_);
}

void FragTrap::setName(const std::string & name)
{
    std::cout << "FragTrap: name '" << name_ << "' set to '" << name << "'\n";
    name_ = name;
}
