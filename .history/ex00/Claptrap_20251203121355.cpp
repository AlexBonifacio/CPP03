
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
  _hit_points(other._hit_points),
  _energy_points(other._energy_points),
  _attack_damage(other._attack_damage)
{
    std::cout << "ClapTrap copy constructor called for " << _name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		_name = other._name;
		_hit_points = other._hit_points;
		_energy_points = other._energy_points;
		_attack_damage = other._attack_damage;
	}
	std::cout << "ClapTrap assignment operator called for " << _name << std::endl;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called for " << _name << '\n';
}

void	ClapTrap::attack(const std::string &target)
{
	_hit_points = _hit_points - _attack_damage;
	
	std::cout << "ClapTrap " << _name << "attacks " << target 
		<< ", causing" << _attack_damage << " points of damage!\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{

}