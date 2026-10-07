/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 11:43:43 by asadik            #+#    #+#             */
/*   Updated: 2026/10/07 15:39:36 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <string>

class Contact {
  public:
	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string Number;
	std::string Secret;

	Contact();
	Contact(std::string first_name, std::string last_name,
			std::string nick_name, std::string number, std::string secret);
};

#endif