#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
	// ClapTrap clap("Clappy");
	ScavTrap scav("Scavvy");
	std::cout << '\n';
	
	scav.attack("Clappy");
	scav.beRepaired(50);
	scav.takeDamage(75);
	scav.getHitPoints();

	scav.attack("Clap")
	std::cout << '\n';

	return 0;
}
