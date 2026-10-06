/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 11:43:43 by asadik            #+#    #+#             */
/*   Updated: 2026/10/05 12:31:44 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Contact {
  public:
	std::string FirstName;
	std::string LastName;
	std::string NickName;
	void setNumber(int number);
	void setSecret(std::string secret);

  private:
	int Number;
	std::string Secret;
};