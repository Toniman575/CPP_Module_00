/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:32:40 by asadik            #+#    #+#             */
/*   Updated: 2026/10/07 18:45:46 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Result.hpp"
#include <cctype>

Contact::Contact() {
	FirstName = "";
	LastName = "";
	NickName = "";
	Number = "";
	Secret = "";
}

Result Contact::set_first_name(std::string input) {
	Result result;

	if (input.empty()) {
		result.error = std::string("empty input");
		result.type = ERROR;
	} else {
		for (int i = 0; i < input.length(); i++) {
			if (!std::isalpha(input[i])) {
				result.error = std::string("non alphabetical input");
				result.type = ERROR;
				break;
			}
		}
	}
	if (result.type != ERROR)
		FirstName = input;
	return result;
}

Result Contact::set_last_name(std::string input) {
	Result result;

	if (input.empty()) {
		result.error = std::string("empty input");
		result.type = ERROR;
	} else {
		for (int i = 0; i < input.length(); i++) {
			if (!std::isalpha(input[i])) {
				result.error = std::string("non alphabetical input");
				result.type = ERROR;
				break;
			}
		}
	}
	if (result.type != ERROR)
		LastName = input;
	return result;
}

Result Contact::set_nick_name(std::string input) {
	Result result;

	if (input.empty()) {
		result.error = std::string("empty input");
		result.type = ERROR;
	} else {
		for (int i = 0; i < input.length(); i++) {
			if (!std::isalpha(input[i])) {
				result.error = std::string("non alphabetical input");
				result.type = ERROR;
				break;
			}
		}
	}
	if (result.type != ERROR)
		NickName = input;
	return result;
}

Result Contact::set_phone_number(std::string input) {
	Result result;

	if (input.empty()) {
		result.error = std::string("empty input");
		result.type = ERROR;
	} else {
		for (int i = 0; i < input.length(); i++) {
			if (!std::isdigit(input[i])) {
				result.error = std::string("non numerical input");
				result.type = ERROR;
				break;
			}
		}
	}
	if (result.type != ERROR)
		Number = input;
	return result;
}

Result Contact::set_secret(std::string input) {
	Result result;

	if (input.empty()) {
		result.error = std::string("empty input");
		result.type = ERROR;
	} else {
		for (int i = 0; i < input.length(); i++) {
			if (!std::isalpha(input[i]) && !std::isdigit(input[i])) {
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
