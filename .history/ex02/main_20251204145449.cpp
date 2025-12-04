#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
	ClapTrap clap("Clappy");
	std::cout << '\n';
	FragTrap frag("Fraggy");
	std::cout << '\n';
	
	FragTrap x = frag;
	FragTrap 
	std::cout << '\n';

	x.attack("y");
	x.beRepaired(2);
	std::cout << '\n';


	frag.attack("Clappy");
	frag.beRepaired(50);
	frag.takeDamage(75);

	std::cout << '\n';
	frag.getHitPoints();
	x.getHitPoints();
	std::cout << '\n';

	frag.attack("Clappy");
	frag.highFivesGuys();
	std::cout << '\n';

	return 0;
}
