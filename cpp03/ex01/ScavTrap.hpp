#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP   

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(); //constructor
        ScavTrap(const std::string& name);
        ScavTrap(const ScavTrap& copy); //copia constructor
        ScavTrap& operator=(const ScavTrap& copy); //asignacion
        ~ScavTrap(); //destructor

        void guardGate();
};

#endif // SCAVTRAP_HPP