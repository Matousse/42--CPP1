#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main (void)
{
	ClapTrap jojofrip = ClapTrap("Jojo la fripouille");

	jojofrip.attack("Robert");
	jojofrip.takeDamage(5);
	jojofrip.attack("Robert");
	jojofrip.beRepaired(10);
	jojofrip.attack("Robert");

	//now, no hitpoints

	jojofrip.takeDamage(15);
	jojofrip.beRepaired(10);
	jojofrip.attack("Robert");
	jojofrip.takeDamage(5);

	ScavTrap trapiTrapon = ScavTrap("Bouzi Bouzin");

	trapiTrapon.attack("Marine");
	trapiTrapon.beRepaired(10);
	trapiTrapon.guardGate();
	trapiTrapon.takeDamage(100);
	trapiTrapon.takeDamage(100);
	trapiTrapon.attack("Marine");
	trapiTrapon.beRepaired(10);
	trapiTrapon.guardGate();
	trapiTrapon.takeDamage(100);
}
