/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 11:06:25 by asadik            #+#    #+#             */
/*   Updated: 2026/10/08 14:02:51 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.cpp"
#include "PhoneBook.cpp"
#include <cctype>
#include <iostream>
#include <string>

int main(void) {
	std::string input;
	PhoneBook phonebook;

	while (1) {
		std::cout << "Please input one of the following commands:\n\nADD - add "
					 "a Contact to the Phonebook\nSEARCH - Display saved "
					 "contacts\nEXIT - Quit Program\n";
		if (!std::getline(std::cin, input))
			return 0;
		if (input.compare("EXIT") == 0)
			break;
		else if (input.compare("ADD") == 0) {
			if (!phonebook.add())
				return 0;
		} else if (input.compare("SEARCH") == 0) {
			phonebook.display_contacts();
			//  phonebook.search_contact();
		} else {
			std::cout << "Please input a valid command!\n";
		}
	}
}
