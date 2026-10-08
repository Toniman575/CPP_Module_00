/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:32:40 by asadik            #+#    #+#             */
/*   Updated: 2026/10/08 19:56:11 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Result.hpp"
#include "utils.hpp"
#include <cctype>
#include <iostream>

static void is_empty(Result &result, std::string input) {
	if (input.empty()) {
		result.error = std::string("empty input");
		result.type = ERROR;
	}
}

Contact::Contact() {
	FirstName = "";
	LastName = "";
	NickName = "";
	Number = "";
	Secret = "";
}

Result Contact::set_first_name(std::string input) {
	Result result;

	result.type = OK;
	is_empty(result, input);
	is_valid(result, input, std::isalpha,
			 std::string("non alphabetical input"));
	if (result.type != ERROR)
		FirstName = input;
	return result;
}

Result Contact::set_last_name(std::string input) {
	Result result;

	result.type = OK;
	is_empty(result, input);
	is_valid(result, input, std::isalpha,
			 std::string("non alphabetical input"));
	if (result.type != ERROR)
		LastName = input;
	return result;
}

Result Contact::set_nick_name(std::string input) {
	Result result;

	result.type = OK;
	is_empty(result, input);
	is_valid(result, input, std::isalpha,
			 std::string("non alphabetical input"));
	if (result.type != ERROR)
		NickName = input;
	return result;
}

Result Contact::set_phone_number(std::string input) {
	Result result;

	result.type = OK;
	is_empty(result, input);
	is_valid(result, input, std::isdigit, std::string("non numerical input"));
	if (result.type != ERROR)
		Number = input;
	return result;
}

Result Contact::set_secret(std::string input) {
	Result result;

	result.type = OK;
	is_empty(result, input);
	if (result.type == OK) {
		for (std::string::size_type i = 0; i < input.length(); i++) {
			if (!std::isdigit(input[i]) && !std::isalpha(input[i])) {
				result.error = std::string("non alphanumerical input");
				result.type = ERROR;
				break;
			}
		}
	}
	if (result.type != ERROR)
		Secret = input;
	return result;
}

std::string Contact::get_first_name() const { return FirstName; }

std::string Contact::get_last_name() const { return LastName; }

std::string Contact::get_nick_name() const { return NickName; }

std::string Contact::get_phone_number() const { return Number; }

std::string Contact::get_secret() const { return Secret; }

std::ostream &operator<<(std::ostream &os, const Contact &c) {
	os << "First Name: " << c.get_first_name() << '\n'
	   << "Last Name: " << c.get_last_name() << '\n'
	   << "Nickname: " << c.get_nick_name() << '\n'
	   << "Phone Number: " << c.get_phone_number() << '\n'
	   << "Secret: " << c.get_secret() << "\n\n";
	return os;
}