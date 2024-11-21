#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

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

	FragTrap georgie = FragTrap("Georgie");

	georgie.attack("Marine");
	georgie.beRepaired(10);
	georgie.highFiveGuys();
	georgie.takeDamage(100);
	georgie.takeDamage(100);
	georgie.attack("Marine");
	georgie.beRepaired(10);
	georgie.highFiveGuys();
	georgie.takeDamage(100);

	DiamondTrap zozo = DiamondTrap("Zozo");

	zozo.attack("Marine");
	zozo.whoAmI();
	zozo.takeDamage(100);
	zozo.takeDamage(100);
	zozo.attack("Marine");
	zozo.whoAmI();
	zozo.takeDamage(100);

}
