#include "FragTrap.hpp"

int main()
{
	std::cout << "=== Default constructor ===" << std::endl;
	FragTrap a;

	std::cout << "\n=== Param constructor ===" << std::endl;
	FragTrap b("Ana");

	std::cout << "\n=== Copy constructor ===" << std::endl;
	FragTrap c(b);

	std::cout << "\n=== Assignment operator ===" << std::endl;
	a = b;

	std::cout << "\n=== Actions ===" << std::endl;
	b.attack("enemy");
	b.takeDamage(20);
	b.beRepaired(10);
	b.highFivesGuys();

	std::cout << "\n=== End of program ===" << std::endl;

	return 0;
}