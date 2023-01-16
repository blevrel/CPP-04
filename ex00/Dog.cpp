/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:38:45 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/10 10:30:22 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Dog.hpp"

Dog::Dog(void)
{
	this->_type = "Dog";
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog(const Dog& other)
	:	Animal(other)
{
	this->_type = other.getType();
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called." << std::endl;
}

std::string	Dog::getType(void) const
{
	return (this->_type);
}

void	Dog::makeSound(void) const
{
	std::cout << "woof" << std::endl;
}

Dog&	Dog::operator=(const Dog &other)
{
	std::cout << "Dog assignment operator called." << std::endl;
	this->_type = other.getType();
	return (*this);
}
