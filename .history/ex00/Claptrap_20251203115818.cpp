
#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() 
{
	std::cout << "Default constructor called\n";
}

ClapTrap::ClapTrap(std::string const name) 
	: _name(name), 
		_hit_points(10), 
		_energy_points(10), 
		_attack_damage(10)
{
	std::cout << "Clap constructor called for " << _name << '\n';
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	if (this != &copy)
	{
		_name = 
	}
}
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called for " << _name << '\n';
}

