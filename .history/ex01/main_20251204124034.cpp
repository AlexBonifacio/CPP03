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

	float x = 0;
	float y = 0.1;
	for (int i = 0; i < 10000; i++)
	{
		x += 0;
	}


	std::cout << x << '\n';
	return 0;
}
