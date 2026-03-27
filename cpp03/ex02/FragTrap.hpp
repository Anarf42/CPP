#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
    private:
    public:
        FragTrap(); //constructor
        FragTrap(const std::string& name);
        FragTrap(const FragTrap& copy); //copia constructor
        FragTrap& operator=(const FragTrap& copy); //asignacion
        ~FragTrap(); //destructor

        void    highFivesGuys(void);
};

#endif