/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:42:42 by gsaiago           #+#    #+#             */
/*   Updated: 2023/05/25 19:15:14 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	c1("Gabriel");
	ClapTrap	c2(c1);


	std::cout << "== test case 1 ==" << std::endl;
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
	return (0);
}
