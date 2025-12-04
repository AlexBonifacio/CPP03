#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(const std::string& name)
	: ClapTrap(name)
{
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;

	std::cout << "Constructor FragTrap called for " << _name << '\n';
}

FragTrap::FragTrap()
	:ClapTrap("DefaultFrag")
{
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;

	std::cout << "Default construcot FragTrap called for " << _name << '\n';
}

FragTrap::FragTrap(const FragTrap& copy)
	: ClapTrap(copy)
{
	std::cout << "Copy constructor FragTrap called for " << _name << '\n';
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor FragTrap called for " << _name << '\n';
}

FragTrap&	FragTrap::operator=(const FragTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}

	std::cout << "FragTrap operator = called for " << _name << '\n';

	return *this;
}

void	FragTrap::attack(const std::string& target)
{
	if (_energy_points <= 0)
	{
		std::cout << "FragTrap " << _name
			<< " has no more energy\n";
		return ;
	}
	if (_hit_points <= 0)
	{
		std::cout << "FragTrap " << _name
			<< " has no more hit points\n";
		return ;
	} 
	_energy_points--;
	
	std::cout << "FragTrap " << _name 
				<< " attacks " << target 
				<< ", causing " << _attack_damage 
				<< " points of damage!\n";
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Positive high five?\n";
}