/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:09:18 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/10 10:42:24 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->_type = "WrongCat";
	std::cout << "WrongCat default constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	this->_type = other.getType();
	std::cout << "WrongCat copy constructor called." << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called." << std::endl;
}

std::string	WrongCat::getType(void) const
{
	return (this->_type);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "moo" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat assignment operator called." << std::endl;
	this->_type = other.getType();
	return (*this);
}
