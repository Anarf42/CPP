#include "ScavTrap.hpp"

#include "ScavTrap.hpp"

int main()
{
    std::cout << "=== Default constructor ===" << std::endl;
    ScavTrap a;

    std::cout << "\n=== Param constructor ===" << std::endl;
    ScavTrap b("Ana");

    std::cout << "\n=== Copy constructor ===" << std::endl;
    ScavTrap c(b);

    std::cout << "\n=== Assignment operator ===" << std::endl;
    a = b;

    std::cout << "\n=== Actions ===" << std::endl;
    b.attack("enemy");
    b.guardGate();

    std::cout << "\n=== Destruction ===" << std::endl;

    return 0;
}