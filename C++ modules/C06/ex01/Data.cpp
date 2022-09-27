/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misha <misha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 20:17:52 by misha             #+#    #+#             */
/*   Updated: 2022/01/31 21:45:35 by misha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"


Data::Data(void) : num(77), str("test "), c('@')
{
	
}

Data::~Data(void)
{
	
}

Data::Data(Data & origin)
{
	*this = origin;
}

Data &	Data::operator=(Data & origin)
{
	return (origin);
}

