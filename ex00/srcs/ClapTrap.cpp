#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap() : name_("noname"), hp_(10), ep_(10), ad_(0)
{
	std::cout << "ClapTrap : " << name_ << " : default constructor called\n";
}

ClapTrap::ClapTrap(const std::string name) : name_(name), hp_(10), ep_(10), ad_(0)
{
	std::cout << "ClapTrap : " << name_ << " : constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap & other)
{
	this->name_ = other.name_;
	std::cout << "ClapTrap : " << name_ << " : copy constructor called\n";
}

ClapTrap & ClapTrap::operator=(const ClapTrap & other)
{
	if (this != &other)
		this->name_ = other.name_;
	std::cout << "ClapTrap :  " << this->name_ << " : copy assignment operator called\n";
	return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap : " << name_ << " : destructor called\n";
}

void	ClapTrap::attack(const std::string& target)
{
	if (!target.empty() && ep_ > 0 && hp_ > 0)
	{
		std::cout << "ClapTrap " << name_ << " attacks " << target << ", causing " << ad_ << " points of damage!" << std::endl;
		this->ep_ -= 1;
	}
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hp_ > 0)
	{
		std::cout << "ClapTrap " << name_ << " took damage, causing " << amount << " points of damage!" << std::endl;
		if (static_cast<int>(hp_ - amount) <= 0)
		  hp_ = 0;
		else
		  hp_ -= amount;
	}
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (hp_ > 0 && ep_ > 0)
	{
		hp_ += amount;
		ep_ -= 1;
	}
	std::cout << "ClapTrap " << name_ << " regained " << amount << " hit points!" << std::endl;
}

int ClapTrap::getAd() const
{
    return (ad_);
}
int ClapTrap::getEp() const
{
    return (ep_);
}
int ClapTrap::getHp() const
{
    return (hp_);
}

void ClapTrap::setName(const std::string & name)
{
    std::cout << "ClapTrap: name '" << name_ << "' set to '" << name << "'\n";
    name_ = name;
}
