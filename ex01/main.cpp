/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 11:06:25 by asadik            #+#    #+#             */
/*   Updated: 2026/10/06 18:23:05 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int main(void) {
	std::string input;
	PhoneBook phonebook;
	std::cout
		<< "Please input one of the following commands:\n\nADD - add a Contact "
		   "to the Phonebook\nSEARCH - Display saved contacts\nEXIT - Quit "
		   "Program";
	while (1) {
		std::cin >> input;
		if (input.compare("EXIT") == 0)
			break;
		else if (input.compare("ADD") == 0) {
			//new_contact_info(phonebook);
		}
		else if (input.compare("SEARCH") == 0) {
			//phonebook.display_contacts();
			//phonebook.search_contact();
		}
	}
}