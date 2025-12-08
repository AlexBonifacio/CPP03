#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
	{
		FragTrap fragga;
		ScavTrap scavva;
		ClapTrap clappa;
		std::cout << '\n';

		fragga.getEnergyPoints();
		fragga.getHitPoints();
		fragga.attack("random");
		fragga.highFivesGuys();
		std::cout << '\n';

		scavva.getEnergyPoints();
		scavva.getHitPoints();
		scavva.attack("random");
		std::cout << '\n';

		clappa.getEnergyPoints();
		clappa.getHitPoints();
		clappa.attack("random");
		std::cout << '\n';
	}
	std::cout << '\n';

	// ClapTrap clap("Clappy");
	// std::cout << '\n';
	// FragTrap frag("Fraggy");
	// std::cout << '\n';
	
	// FragTrap x = frag;
	// FragTrap y(x);
	// std::cout << '\n';

	// frag.getHitPoints();
	// x.getHitPoints();
	// y.getHitPoints();
	// std::cout << '\n';

	// x.attack("y");
	// x.beRepaired(2);
	// std::cout << '\n';
	
	// frag.getHitPoints();
	// x.getHitPoints();
	// y.getHitPoints();
	// std::cout << '\n';


	// frag.attack("Clappy");
	// frag.beRepaired(50);
	// frag.takeDamage(75);

	// std::cout << '\n';
	// frag.getHitPoints();
	// x.getHitPoints();
	// y.getHitPoints();
	// std::cout << '\n';

	// frag.attack("Clappy");
	// frag.highFivesGuys();
	// std::cout << '\n';

	return 0;
}
