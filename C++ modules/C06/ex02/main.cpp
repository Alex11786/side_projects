/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbeatris <fbeatris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 19:57:06 by misha             #+#    #+#             */
/*   Updated: 2022/02/04 03:38:10 by fbeatris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sys/time.h>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	Base* instance = NULL;

	srand(time(NULL));
	const int num = rand() % 3;
	switch (num)
	{
	case 0:
		instance = new A;
		break;
	case 1:
		instance = new B;
		break;
	case 2:
		instance = new C;
		break;
	default:
		break;
	}
	return (instance);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "This is class A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "This is class B" << std::endl;
	else
		std::cout << "This is class C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		Base& N = dynamic_cast<A&>(p);
		std::cout << "This is class A" << std::endl;
		(void)N;
	}
	catch(const std::exception& e)
	{
	}
	
	try
	{
		Base& N = dynamic_cast<B&>(p);
		std::cout << "This is class B" << std::endl;
		(void)N;
	}
	catch(const std::exception& e)
	{
	}
	
	try
	{
		Base& N = dynamic_cast<C&>(p);
		std::cout << "This is class C" << std::endl;
		(void)N;
	}
	catch(const std::exception& e)
	{
	}
}

int main (void)
{
	Base *instance = generate();
	identify(instance);
	identify(*instance);
	delete instance;
}
