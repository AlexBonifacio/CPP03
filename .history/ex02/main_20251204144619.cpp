#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
	ClapTrap clap("Clappy");
	std::cout << '\n';
	FragTrap scav("Scavvy");
	std::cout << '\n';
	
	FragTrap x = scav;
	std::cout << '\n';

	scav.attack("Clappy");
	scav.beRepaired(50);
	scav.takeDamage(75);
	scav.getHitPoints();
	std::cout << '\n';

	scav.attack("Clappy");
	scav.highFivesGuys();
	std::cout << '\n';

	return 0;
}
