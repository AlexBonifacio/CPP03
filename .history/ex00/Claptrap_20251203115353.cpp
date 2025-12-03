
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {}

ClapTrap::ClapTrap(std::string const name) 
	: _name(name), 
		_hit_points(10), 
		_energy_points(10), 
		_attack_damage(10)
{
	std::cout << "Clap constructor called for " << _name << '\n';
}