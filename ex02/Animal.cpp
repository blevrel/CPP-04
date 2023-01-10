/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:23:30 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/10 10:52:12 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Animal.hpp"

Animal::Animal(void)
	:	_type("Animal")
{
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(const Animal& other)
	:	_type(other.getType())
{
	std::cout << "Animal copy constructor called." << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called." << std::endl;
}

std::string	Animal::getType() const
{
	return (this->_type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Inaudible animal sound" << std::endl;
}

void	Animal::printIdeas(void) const
{
	std::cout << "Ideas are in cats or dogs brains" << std::endl;
}

Animal&	Animal::operator=(const Animal &other)
{
	std::cout << "Animal assignment operator called." << std::endl;
	this->_type = other.getType();
	return (*this);
}
