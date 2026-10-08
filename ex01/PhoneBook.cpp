/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:32:59 by asadik            #+#    #+#             */
/*   Updated: 2026/10/08 20:00:10 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Result.hpp"
#include "utils.hpp"
#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>

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
	int index = contact_n % 8;

	std::cout << "Please input the First Name(only Alphabetical Characters "
				 "allowed):\n";
	if (!force_valid_input(this->contacts[index], &Contact::set_first_name))
		return false;

	std::cout << "Please input the Last Name(only Alphabetical Characters "
				 "allowed):\n";
	if (!force_valid_input(this->contacts[index], &Contact::set_last_name))
		return false;

	std::cout
		<< "Please input the Nickname(only Alphabetical Characters allowed):\n";
	if (!force_valid_input(this->contacts[index], &Contact::set_nick_name))
		return false;

	std::cout
		<< "Please input the Phonenumber(only Numerical Characters allowed):\n";
	if (!force_valid_input(this->contacts[index], &Contact::set_phone_number))
		return false;

	std::cout
		<< "Please input the Secret(only Alphanumerical Characters allowed):\n";
	if (!force_valid_input(this->contacts[index], &Contact::set_secret))
		return false;

	contact_n++;
	return true;
}

bool PhoneBook::search_contact() {
	std::string input;
	int end;
	int index;
	Result result;

	if (contact_n < 8)
		end = contact_n;
	else
		end = 8;

	std::cout << "Input a single digit from 1 to " << end
			  << ". Press Enter to exit search.\n";

	while (std::getline(std::cin, input)) {
		if (input.empty())
			return true;
		result.type = OK;
		result.error = "";

		if (result.type == OK && input.length() > 1) {
			result.error = "more than one character";
			result.type = ERROR;
		}

		is_valid(result, input, std::isdigit, "non numerical input");
		if (result.type == OK) {
			index = input[0] - '0';
			if (index < 1 || index > end) {
				result.error = "invalid index";
				result.type = ERROR;
			}
		}

		if (result.type == ERROR) {
			std::cout << "Failed to search for contact with following error: "
					  << result.error << "\nPlease try again.\n";
		} else {
			std::cout << contacts[index - 1];
			return true;
		}
	}
	return false;
}

static std::string fmt(const std::string input) {
	std::string s = input;
	if (input.length() > 10)
		s = input.substr(0, 9) + '.';
	return s;
}

std::ostream &operator<<(std::ostream &os, const PhoneBook &pb) {
	int end;

	if (pb.contact_n < 8)
		end = pb.contact_n;
	else
		end = 8;
	for (int index = 0; index < end; index++) {
		os << std::right << std::setw(10) << index + 1 << '|' << std::setw(10)
		   << fmt(pb.contacts[index].get_first_name()) << '|' << std::setw(10)
		   << fmt(pb.contacts[index].get_last_name()) << '|' << std::setw(10)
		   << fmt(pb.contacts[index].get_nick_name()) << '\n';
	}
	os << "\n";
	return os;
}
