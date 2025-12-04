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
	: ClapTrap(copy)
{
	std::cout << "ScavTrap copy constructor called for " << _name << '\n';
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;

	std::cout << "ScavTrap assignment operator called for " << _name << '\n';

	return *this;
}


void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name
			<< " is now in Gate keeper mode.\n";
}