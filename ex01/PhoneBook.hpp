/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 11:43:46 by asadik            #+#    #+#             */
/*   Updated: 2026/10/05 12:53:24 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class PhoneBook {
  public:
	Contact *contacts;
	int contact_n;
	void setNumber(int number);
	void setSecret(std::string secret);
};
