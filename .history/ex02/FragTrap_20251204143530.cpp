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

FragTrap::FragTrap

void highFivesGuys(void)
{
	std::cout << "Positive high five?\n";
}