#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
	ClapTrap clap("Clappy");
	std::cout << '\n';
	ScavTrap scav("Scavvy");
	std::cout << '\n';
	
	scav.attack("Clappy");
	scav.beRepaired(50);
	scav.takeDamage(75);
	scav.getHitPoints();
	std::cout << '\n';

	scav.attack("Clappy");
	scav.guardGate();
	std::cout << '\n';

	for (int i = 0; i < 1000; i++)
	{
		y 
	}
	return 0;
}
