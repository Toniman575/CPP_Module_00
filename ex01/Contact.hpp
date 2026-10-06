/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 11:43:43 by asadik            #+#    #+#             */
/*   Updated: 2026/10/06 17:34:20 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Contact {
  public:
	std::string FirstName;
	std::string LastName;
	std::string NickName;

	Contact()
	{
		FirstName = "";
		LastName = "";
		NickName = "";
		Number = "";
		Secret = "";
	}
	Contact(std::string first_name, std::string last_name,
			std::string nick_name, std::string number, std::string secret) {
		FirstName = first_name;
		LastName = last_name;
		NickName = nick_name;
		Number = number;
		Secret = secret;
	}

  private:
	std::string Number;
	std::string Secret;
};
