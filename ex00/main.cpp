#include <iostream>
#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap clap("Clappy");

	clap.attack("trappy");
	clap.beRepaired(2);
	clap.takeDamage(4);
	clap.takeDamage(4);
	// clap.beRepaired(2);
	clap.takeDamage(4);
	clap.takeDamage(4);
	clap.takeDamage(4);

	clap.getHitPoints();

	// clap.beRepaired(2);
	// clap.beRepaired(2);
	// clap.beRepaired(2);
	// clap.beRepaired(2);
	// clap.beRepaired(2);
	// clap.beRepaired(2);
	// clap.beRepaired(2);

	std::cout << std::endl;
	clap.getHitPoints();
	clap.getEnergyPoints();
	std::cout << std::endl;

	clap.beRepaired(2);
	clap.beRepaired(2);
	std::cout << std::endl;
	
	clap.getHitPoints();
	clap.getEnergyPoints();

	clap.takeDamage(4);

	std::cout << std::endl;

	ClapTrap a;
	std::cout << "a = clap -> ";
	a = clap;

	a.getHitPoints();
	std::cout << std::endl;

	ClapTrap b(a);
	std::cout << "b = clap -> ";
	b = clap;
	b.getHitPoints();
	std::cout << std::endl;

	return 0;
}
