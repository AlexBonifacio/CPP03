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

		int	getHitPoints() const;
		int	getEnergyPoints() const;

	protected:
		unsigned int			_hit_points;
		unsigned int			_energy_points;
		unsigned int			_attack_damage;
	
	private:
		std::string				_name;

};

#endif // CLAPTRAP_HPP
