/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:32:59 by asadik            #+#    #+#             */
/*   Updated: 2026/10/08 14:02:17 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Result.hpp"
#include <iostream>

PhoneBook::PhoneBook() { contact_n = 0; }

static bool force_valid_input(Contact &contact,
							  Result (Contact::*func)(std::string)) {

	Result result;
	std::string input;

	while (std::getline(std::cin, input)) {
		result = (contact.*func)(input);
		if (result.type == ERROR)
			std::cout << "Failed to add field with error: " << result.error
					  << "\nPlease try again.\n";
		else
			return true;
	}
	return false;
}

bool PhoneBook::add() {
	Contact contact = this->contacts[contact_n % 8];

	std::cout << "Please input the First Name(only Alphabetical Characters "
				 "allowed):\n";
	if (!force_valid_input(contact, &Contact::set_first_name))
		return false;
	std::cout << "Please input the Last Name(only Alphabetical Characters "
				 "allowed):\n";
	if (!force_valid_input(contact, &Contact::set_last_name))
		return false;
	std::cout << "Please input the Nickname(only Alphabetical Characters "
				 "allowed):\n";
	if (!force_valid_input(contact, &Contact::set_nick_name))
		return false;
	std::cout
		<< "Please input the Phonenumber(only Numerical Characters allowed):\n";
	if (!force_valid_input(contact, &Contact::set_phone_number))
		return false;
	std::cout << "Please input the Secret(only AlphaNumerical Characters "
				 "allowed):\n";
	if (!force_valid_input(contact, &Contact::set_secret))
		return false;
	contact_n++;
	return true;
}

void PhoneBook::display_contacts() {
	int end;
	if (contact_n < 7)
		end = contact_n;
	else
		end = 7;
}