/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:42:42 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/01 16:09:27 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"
#include "./FragTrap.hpp"
#include "./DiamondTrap.hpp"

void printName(ClapTrap *who);

void printName(ClapTrap *who)
{
	std::cout << who->getName() << std::endl;
}

int	main(void)
{
	/*
	std::cout << "== test case 1 ==" << std::endl;
	{
		ClapTrap	c1("Gabriel");
		ClapTrap	c2(c1);

		std::cout << "The mighty ClapTrap began his quest do destroy his evil clone" << std::endl;
		c1.attack("Gabriel_[clone]");
		c2.takeDamage(c1.getAttackDamage());
		c1.attack("Gabriel_[clone]");
		c2.takeDamage(c1.getAttackDamage());
		std::cout << "one... year... later..." << std::endl;
		c1.setEnergyPoints(1);
		std::cout << "And so it ends, ClapTrap can't deal enough damage on its evil clone" << std::endl;
		std::cout << c1.getName() << ": You son of a <beep>! I hate you so much that I'll clone myself out of spite" << std::endl;
		std::cout << c1.getName() << ": But I'll rest first" << std::endl;
		c1.setEnergyPoints(10);
		ClapTrap	c3 = c1;
		std::cout << c1.getName() << ": God <beep>ing dammit! Now there's two of you!!!" << std::endl;
	}
	*/

	std::cout << "== test case 2 ==" << std::endl;
	{
		DiamondTrap	s2("nomeTeste");
		DiamondTrap *s3 = new DiamondTrap("meu nome");
		ClapTrap	*s4 = new ClapTrap("clap em");

		std::cout << s2.getName() << ": Hit points > " << s2.getHitPoints() << "\n" << "Energy points > " << s2.getEnergyPoints() << "\n" << "Attack damage > " << s2.getAttackDamage() << std::endl;
//		s2.attack("o ar");
//		s2.highFiveGuys();
//		s2.guardGate();
		s2.whoAmI();
		printName(s3);
		printName(s4);

		delete s3;
		delete s4;
	}
	return (0);
}
