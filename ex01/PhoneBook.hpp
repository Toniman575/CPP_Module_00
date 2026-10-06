/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 11:43:46 by asadik            #+#    #+#             */
/*   Updated: 2026/10/06 19:11:53 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

class PhoneBook {
  public:
	Contact contacts[8];
	unsigned int contact_n;

	PhoneBook() { contact_n = 0; }
	void add(Contact new_contact) {
		this->contacts[contact_n % 8] = new_contact;
		contact_n++;
	}
	void display_contacts() {
		int end;
		if (contact_n < 7)
			end = contact_n;
		else
			end = 7;
		for (int i = 0; i <= end; i++) {
			std::cout << ;
		}
	}
};
