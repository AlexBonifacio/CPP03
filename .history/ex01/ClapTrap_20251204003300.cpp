
#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
	: _name("Default"),
		_hit_points(10),
		_energy_points(10),
		_attack_damage(0)
{
	std::cout << "Default constructor called\n";
}

ClapTrap::ClapTrap(const std::string& name) 
	: _name(name), 
		_hit_points(10), 
		_energy_points(10), 
		_attack_damage(0)
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

void	ClapTrap::attack(const std::string& target)
{
	if (_energy_points <= 0)
	{
		std::cout << "ClapTrap " << _name
			<< " has no more energy\n";
		return ;
	}
	if (_hit_points <= 0)
	{
		std::cout << "ClapTrap " << _name
			<< " has no more hit points\n";
		return ;
	}
	_energy_points--;
	
	std::cout << "ClapTrap " << _name 
				<< " attacks " << target 
				<< ", causing " << _attack_damage 
				<< " points of damage!\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy_points <= 0)
	{
		std::cout << "ClapTrap " << _name
			<< " has no more energy\n";
		return ;
	}
	if (_hit_points <= 0)
	{
		std::cout << "ClapTrap " << _name
			<< " has no more hit points\n";
		return ;
	}
	_hit_points = _hit_points + amount;
	if (_hit_points > 14)
	{
		_hit_points = 14;
		std::cout << "Max hit points(20) reached for ClapTrap " << _name << "!\n";
	}
	_energy_points--;

	std::cout << "ClapTrap " << _name 
			<< " repairs itself"
			<< ", restoring " << amount 
			<< " points of life!\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_points <= 0)
	{
		std::cout << "ClapTrap " << _name
			<< " has no more hit points\n";
		return ;
	}
	
	if (amount >= _hit_points)
		_hit_points = 0;
	else
		_hit_points = _hit_points - amount;
	
	std::cout << "ClapTrap " << _name
			<< " takes " << amount
			<< " damages\n";
}

int	ClapTrap::getHitPoints() const
{
	std::cout << "ClapTrap " << _name
			<< " has " << _hit_points
			<< " hit points\n";
	return _hit_points;
}

int	ClapTrap::getEnergyPoints() const
{
	std::cout << "ClapTrap " << _name
			<< " has " << _energy_points
			<< " energy points\n";
	return _energy_points;
}
