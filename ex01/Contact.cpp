/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:32:40 by asadik            #+#    #+#             */
/*   Updated: 2026/10/07 15:38:10 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
	FirstName = "";
	LastName = "";
	NickName = "";
	Number = "";
	Secret = "";
}

Contact::Contact(std::string first_name, std::string last_name,
				 std::string nick_name, std::string number,
				 std::string secret) {
	FirstName = first_name;
	LastName = last_name;
	NickName = nick_name;
	Number = number;
	Secret = secret;
}
