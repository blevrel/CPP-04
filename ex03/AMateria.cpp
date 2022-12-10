/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 11:04:57 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/10 11:51:59 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(void)
{
	this->type = "materia";
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
	std::cout << "AMateria type constructor called" << std::endl;
}

AMateria::AMateria(AMateria const & other)
{
	this->type = other.getType;
	std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria::operator=(AMateria & other)
{
	this->type = other.getType();
	std::cout << "AMateria assignment operator called" << std::endl;
	return (*this);
}
