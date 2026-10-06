/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 08:51:05 by asadik            #+#    #+#             */
/*   Updated: 2026/10/05 10:42:30 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv) {
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
	else {
		for (int arg_i = 1; arg_i < argc; arg_i++) {
			std::string s(argv[arg_i]);
			for (unsigned long c_i = 0; c_i < s.length(); c_i++)
				s[c_i] = toupper(s[c_i]);
			std::cout << s;
		}
		std::cout << "\n";
	}
}
