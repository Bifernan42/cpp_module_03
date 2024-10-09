#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		std::string name_;
		unsigned int hp_;
		unsigned int ep_;
		unsigned int ad_;
	public:

	    FragTrap();
		FragTrap(const std::string);
		FragTrap(const FragTrap &);
		FragTrap & operator=(const FragTrap &);
		~FragTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		int   getEp() const;
		int   getHp() const;
		int   getAd() const;
		void  setName(const std::string &);
};




#endif
