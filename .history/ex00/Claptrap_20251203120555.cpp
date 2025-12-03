
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

ClapTrap::ClapTrap(const ClapTrap &other)
: _name(other._name),
  _hitPoints(other._hitPoints),
  _energyPoints(other._energyPoints),
  _attackDamage(other._attackDamage)
{
    std::cout << "ClapTrap copy constructor called for " << _name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &copy)
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called for " << _name << '\n';
}

