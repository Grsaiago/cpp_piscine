/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 12:16:31 by gsaiago           #+#    #+#             */
/*   Updated: 2023/05/21 20:45:46 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <ios>

class	Contact
{
	public:
		Contact(void);
		~Contact(void);
		void	printContact(void) const;
		void	printPreview(void) const;
		void	addContact(void);
		void	addFirstName(void);
		void	addLastName(void);
		void	addNickname(void);
		void	addPhoneNumber(void);
		void	addDarkestSecret(void);
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNumber;
		std::string	darkestSecret;
};

bool	validateInput(std::string line, int (*f)(int));

#endif
