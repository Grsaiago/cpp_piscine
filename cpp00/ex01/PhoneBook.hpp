/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 20:30:25 by gsaiago           #+#    #+#             */
/*   Updated: 2023/05/21 12:17:11 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP
# include <iostream>
# include <iomanip>
# include <cstdlib>
# include "Contact.hpp"

enum	e_phoneBook
{
	PB_MAX_CONTACTS = 8,
	PB_MAX_WIDTH = 10
};

class	PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	addContact(void);
		void	searchList(void) const;
	private:
		Contact			contactList[PB_MAX_CONTACTS];
		unsigned int	contactCount;
		unsigned int	contactIterator;
};

void	printWelcome(void);

#endif
