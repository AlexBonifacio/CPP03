#include <iostream>
#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap clap("Clappy");
	clap.attack("trappy");
	clap.beRepaired(2);
	clap.takeDamage(4);
	clap.takeDamage(4);
	clap.takeDamage(4);
	clap.beRepaired(2);
	clap.beRepaired(2);
	clap.beRepaired(2);
	clap.beRepaired(2);
	clap.beRepaired(2);
	clap.beRepaired(2);
	clap.beRepaired(2);
	clap.beRepaired(2);
	clap.getHitPoints();
	clap.getEnergyPoints();
	clap.takeDamage(4);

	return 0;
}
