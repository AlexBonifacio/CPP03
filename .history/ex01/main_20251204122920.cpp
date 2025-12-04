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

	// clap.attack("trappy");
	// clap.beRepaired(2);
	// clap.takeDamage(4);
	// std::cout << std::endl;
	
	// clap.getHitPoints();
	// clap.getEnergyPoints();

	// clap.takeDamage(4);
	std::cout << '\n';

	return 0;
}
