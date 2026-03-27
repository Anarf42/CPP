#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("default")
{
    _Health = 100;
    _Energy = 100; 
    _Attack = 30;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    _Health = 100;
    _Energy = 100; 
    _Attack = 30;
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
	*this = copy;
}

FragTrap& FragTrap::operator=(const FragTrap& copy)
{
	if (this != &copy)
	{
		_Name = copy._Name;
		_Health = copy._Health;
		_Attack = copy._Attack;
		_Energy = copy._Energy;
	}
	return (*this);
}

FragTrap::~FragTrap() 
{
        std::cout << "FragTrap destructor called" << std::endl;

}

void FragTrap::highFivesGuys(void)
{
        std::cout << "FragTrap ask for a high five!" << std::endl;
}
