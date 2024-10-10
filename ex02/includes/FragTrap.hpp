#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:

	    FragTrap();
		FragTrap(const std::string);
		FragTrap(const FragTrap &);
		FragTrap & operator=(const FragTrap &);
		~FragTrap();
		void attack(const std::string&);
		void takeDamage(unsigned int);
		void beRepaired(unsigned int);
		void highFivesGuys(void);
};

#endif
