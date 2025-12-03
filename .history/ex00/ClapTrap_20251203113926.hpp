#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap {

	public:
		ClapTrap();
		ClapTrap(std::string const name);
		~ClapTrap();

	private:
		std::string	_name;
};

#endif // CLAPTRAP_HPP