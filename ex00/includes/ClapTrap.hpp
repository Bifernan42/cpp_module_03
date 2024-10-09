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
		ClapTrap & operator=(const ClapTrap &);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		int   getEp() const;
		int   getHp() const;
		int   getAd() const;
		void  setName(const std::string &);
};

#endif
