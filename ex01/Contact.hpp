/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 11:43:43 by asadik            #+#    #+#             */
/*   Updated: 2026/10/08 14:38:57 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include "Result.hpp"
#include <string>

class Contact {
  private:
	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string Number;
	std::string Secret;

  public:
	Contact();
	Result set_first_name(std::string input);
	Result set_last_name(std::string input);
	Result set_nick_name(std::string input);
	Result set_phone_number(std::string input);
	Result set_secret(std::string input);
	std::string get_first_name();
	std::string get_last_name();
	std::string get_nick_name();
	std::string get_phone_number();
	std::string get_secret();
};

#endif