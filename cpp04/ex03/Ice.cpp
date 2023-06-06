/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 21:17:37 by gsaiago           #+#    #+#             */
/*   Updated: 2023/06/05 22:09:50 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Character.hpp"

Ice::Ice(void) : AMateria("Ice") {}

Ice::Ice(const Ice &cpy) : AMateria("Ice")
{
	this->setType(cpy.getType());
}

Ice::~Ice(void) {};

AMateria	*Ice::clone(void) const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target) const
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}

AMateria	&Ice::operator=(const AMateria &rhs)
{
	return (*rhs.clone());
}