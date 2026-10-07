/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Result.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 18:02:09 by asadik            #+#    #+#             */
/*   Updated: 2026/10/07 18:36:26 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RESULT_H
#define RESULT_H

#include <string>

enum ResultType {
	ERROR,
	OK,
};

struct Result {
	ResultType type;
	std::string error;
};

#endif