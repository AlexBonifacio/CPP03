#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(const std::string& name)
	: ClapTrap(name)
	{
		_hit_points = 100;
		_energy_points = 50;
		_attack_damage = 20;
		std::cout << "ScavTrap constructor called for " << _name << '\n';
	}

ScavTrap::ScavTrap()
	: ClapTrap()
	{
		_hit_points = 100;
		_energy_points = 50;
		_attack_damage = 20;
		std::cout << "Default ScavTrap constructor called for " << _name << '\n';
	}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called for " << _name << '\n';
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	ScavTrap other;

}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)



void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name
			<< " is now in Gate keeper mode.\n";
}