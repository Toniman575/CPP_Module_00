/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 11:06:25 by asadik            #+#    #+#             */
/*   Updated: 2026/10/06 18:54:36 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

static void new_contact_info(PhoneBook *phonebook) {
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string number;
	std::string secret;

	std::cout << "Please input the First Name:\n";
	std::cin >> first_name;
	std::cout << "Please input the Last Name:\n";
	std::cin >> last_name;
	std::cout << "Please input the Nickname:\n";
	std::cin >> nick_name;
	std::cout << "Please input the Phonenumber:\n";
	std::cin >> number;
	std::cout << "Please input the Secret:\n";
	std::cin >> secret;
	phonebook->add(Contact(first_name, last_name, nick_name, number, secret));
}

int main(void) {
	std::string input;
	PhoneBook phonebook;

	while (1) {
		std::cout << "Please input one of the following commands:\n\nADD - add "
					 "a Contact to the Phonebook\nSEARCH - Display saved "
					 "contacts\nEXIT - Quit Program\n";
		std::cin >> input;
		if (input.compare("EXIT") == 0)
			break;
		else if (input.compare("ADD") == 0) {
			new_contact_info(&phonebook);
		} else if (input.compare("SEARCH") == 0) {
			phonebook.display_contacts();
			//  phonebook.search_contact();
		} else {
			std::cout << "Please input a valid command!";
		}
	}
}