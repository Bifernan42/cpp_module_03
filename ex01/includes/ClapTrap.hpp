#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>


class ClapTrap
{
	private:
		std::string name_;
		unsigned int hp_;
		unsigned int ep_;
		unsigned int ad_;
	public:
		ClapTrap();
		ClapTrap(const std::string);
		ClapTrap(const ClapTrap &);
		ClapTrap(const std::string name, unsigned int hp, unsigned int ep, unsigned int ad);
		ClapTrap & operator=(const ClapTrap &);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		unsigned int   getEp() const;
		unsigned int   getHp() const;
		unsigned int   getAd() const;
		void  setName(const std::string);
		std::string getName() const;
		void setHp(unsigned int value);
		void setEp(unsigned int value);
		void setAd(unsigned int value);
};
#endif
