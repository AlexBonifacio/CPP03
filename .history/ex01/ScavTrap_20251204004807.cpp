#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name)
	: ClapTrap(name)
	{
		
		std::cout << "ScavTrap constructor called for " << name << '\n';
	}