#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap {

	public:
		ClapTrap();
		ClapTrap(std::string const name);
		~ClapTrap();
		ClapTrap(ClapTrap& copy)

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	private:
		std::string	_name;
		int			_hit_points;
		int			_energy_points;
		int			_attack_damage;
};

#endif // CLAPTRAP_HPP