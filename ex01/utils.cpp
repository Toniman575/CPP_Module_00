/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 19:02:49 by asadik            #+#    #+#             */
/*   Updated: 2026/10/08 19:39:07 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
#include "Result.hpp"
#include <string>

void is_valid(Result &result, std::string input, int (*func)(int),
			  std::string message) {
	if (result.type == OK) {
		for (std::string::size_type i = 0; i < input.length(); i++) {
			if (!(func)(input[i])) {
				result.error = message;
				result.type = ERROR;
				break;
			}
		}
	}
}