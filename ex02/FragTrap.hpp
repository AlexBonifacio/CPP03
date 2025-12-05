#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const std::string &name);
		FragTrap(const FragTrap& copy);
		FragTrap& operator=(const FragTrap& other);
		~FragTrap();

		void	attack(const std::string& target);

		void highFivesGuys(void);
};
