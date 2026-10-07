/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:32:59 by asadik            #+#    #+#             */
/*   Updated: 2026/10/07 15:43:03 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() { contact_n = 0; }
void PhoneBook::add(Contact new_contact) {
	this->contacts[contact_n % 8] = new_contact;
	contact_n++;
}
void PhoneBook::display_contacts() {
	int end;
	if (contact_n < 7)
		end = contact_n;
	else
		end = 7;
	for (int i = 0; i <= end; i++) {
		std::cout << i;
		std::cout << "|";
		std::cout << contacts[i].FirstName;
	}
}