/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 11:55:07 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/10 12:04:02 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Cure.hpp"

Cure::Cure(void)
{
	this->type = "cure";
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(std::string const & type)
{
	this->type = type;
	std::cout << "Cure type constructor called" << std::endl;
}

Cure::Cure(Cure const & other)
{
	this->type = other.getType;
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure*	Cure::clone(void) const
{
	return (new Cure());
}

void	Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::operator=(Cure & other)
{
	std::cout << "Cure assignment operator called" << std::endl;
	return (*this);
}
