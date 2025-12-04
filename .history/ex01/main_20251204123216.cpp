#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
	// ClapTrap clap("Clappy");
	ScavTrap scav("Scavvy");
	
	scav.attack("Clappy");
	scav.beRepaired(50);
	scav.takeDamage(75);
	scav.getHitPoints();


	scav.attack("Clappy");
	std::cout << '\n';

	return 0;
}
