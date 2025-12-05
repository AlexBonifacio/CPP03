#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
	{
		FragTrap fragga;
		fragga.getEnergyPoints();
		fragga.getHitPoints();
		fragga.beRepaired(-1);
		fragga.takeDamage(-1);
		fragga.attack("random");
		fragga.getHitPoints();
	}
	std::cout << '\n';

	ClapTrap clap("Clappy");
	std::cout << '\n';
	FragTrap frag("Fraggy");
	std::cout << '\n';
	
	FragTrap x = frag;
	FragTrap y(x);
	std::cout << '\n';

	frag.getHitPoints();
	x.getHitPoints();
	y.getHitPoints();
	std::cout << '\n';

	x.attack("y");
	x.beRepaired(2);
	std::cout << '\n';
	
	frag.getHitPoints();
	x.getHitPoints();
	y.getHitPoints();
	std::cout << '\n';


	frag.attack("Clappy");
	frag.beRepaired(50);
	frag.takeDamage(75);

	std::cout << '\n';
	frag.getHitPoints();
	x.getHitPoints();
	y.getHitPoints();
	std::cout << '\n';

	frag.attack("Clappy");
	frag.highFivesGuys();
	std::cout << '\n';

	return 0;
}
