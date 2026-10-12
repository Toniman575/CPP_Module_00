/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 11:43:46 by asadik            #+#    #+#             */
/*   Updated: 2026/10/12 15:44:02 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook {
  private:
	Contact contacts[8];
	unsigned int contact_n;

  public:
	PhoneBook();
	int	get_contact_n() const;
	Contact get_contact(int index) const;
	bool add();
	bool search_contact();
};

std::ostream &operator<<(std::ostream &os, const PhoneBook &pb);

#endif