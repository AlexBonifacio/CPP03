#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(const std::string& name)
	: ClapTrap(name)
	{
		_hit_points = 100;
		_energy_points = 50;
		_attack_damage = 20;
		std::cout << "ScavTrap param constructor called for " << _name << '\n';
	}

ScavTrap::ScavTrap()
	: ClapTrap("DefaultScav")
	{
		_hit_points = 100;
		_energy_points = 50;
		_attack_damage = 20;
		std::cout << "ScavTrap default constructor called for " << _name << '\n';
	}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called for " << _name << '\n';
}

ScavTrap::ScavTrap(const ScavTrap& copy)
	: ClapTrap(copy)
{
	std::cout << "ScavTrap copy constructor called for " << _name << '\n';
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	std::cout << "ScavTrap assignment operator called for " << _name << '\n';

	return *this;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_energy_points <= 0)
	{
		std::cout << "ScavTrap " << _name
			<< " has no more energy\n";
		return ;
	}
	if (_hit_points <= 0)
	{
		std::cout << "ScavTrap " << _name
			<< " has no more hit points\n";
		return ;
	}
	_energy_points--;
	
	std::cout << "ScavTrap " << _name 
				<< " attacks " << target 
				<< ", causing " << _attack_damage 
				<< " points of damage!\n";
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name
			<< " is now in Gate keeper mode\n";
}
