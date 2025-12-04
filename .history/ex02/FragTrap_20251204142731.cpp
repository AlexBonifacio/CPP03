#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(const std::string& name)
	: ClapTrap(name)
{
	
	std::cout << "Constructor FragTrap called for " << _name << '\n';
}