/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbeatris <fbeatris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:57:06 by misha             #+#    #+#             */
/*   Updated: 2022/02/04 03:39:30 by fbeatris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{;
	return (reinterpret_cast<Data*>(raw));
}

int main (void)
{
	Data *data = new Data;

	std::cout << "Source data: ";
	std::cout << data->str << data->num << data->c << std::endl;
	std::cout << "address: " << data << std::endl << "---" << std::endl;
	
	uintptr_t num = serialize(data);
	std::cout << "Converted number: " << num << std::endl << "---" << std::endl;
	
	data = deserialize(num);
	std::cout << "Final data: ";
	std::cout << data->str << data->num << data->c << std::endl;
	std::cout << "address: " << data << std::endl;
	delete data;
}
