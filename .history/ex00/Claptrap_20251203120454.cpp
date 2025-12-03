
#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() 
{
	std::cout << "Default constructor called\n";
}

ClapTrap::ClapTrap(const std::string& name) 
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
		_name = copy._name;
		_hit_points = copy._hit_points;
		_energy_points = copy._energy_points;
		_attack_damage = copy._attack_damage;
	}
	std::cout << "Copy constructor called for " << _name << '\n';
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &c)
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called for " << _name << '\n';
}

