#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap {

	public:
		ClapTrap();
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap& copy);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap();


		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		unsigned int		getHitPoints() const;
		int		getEnergyPoints() const;


		
	protected:
		std::string				_name;
		unsigned int			_hit_points;
		unsigned int			_energy_points;
		unsigned int			_attack_damage;
};

#endif // CLAPTRAP_HPP
