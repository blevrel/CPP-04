/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 11:47:43 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/10 12:02:48 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Ice.hpp"

Ice::Ice(void)
{
	this->type = "ice";
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(std::string const & type)
{
	this->type = type;
	std::cout << "Ice type constructor called" << std::endl;
}

Ice::Ice(Ice const & other)
{
	this->type = other.getType;
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice*	Ice::clone(void) const
{
	return (new Ice());
}

void	Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::operator=(Ice & other)
{
	std::cout << "Ice assignment operator called" << std::endl;
	return (*this);
}
