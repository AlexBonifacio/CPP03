#include <iostream>
#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap clap("Clappy");
	clap.attack("trappy");
	clap.beRepaired(2);
	clap.takeDamage(4);
	std::cout << std::endl;
	
	clap.getHitPoints();
	clap.getEnergyPoints();

	clap.takeDamage(4);

	return 0;
}
