#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
	{
		ScavTrap scava;
		scava.getEnergyPoints();
		scava.getHitPoints();
	}
	std::cout << '\n';

	ClapTrap clap("Clappy");
	std::cout << '\n';
	ScavTrap scav("Scavvy");
	std::cout << '\n';

	// ScavTrap *scav2 = new(ScavTrap);
	// scav2->attack("a");
	// delete scav2;

	// ScavTrap x = scav;
	// std::cout << '\n';
	// ScavTrap a(x);
	// x.getEnergyPoints();
	// std::cout << '\n';

	std::cout << '\n';
	scav.attack("Clappy");
	scav.beRepaired(-1);
	scav.takeDamage(-1);
	scav.getHitPoints();
	std::cout << '\n';

	scav.attack("Clappy");
	scav.guardGate();
	std::cout << '\n';

	std::cout << '\n';

	return 0;
}
