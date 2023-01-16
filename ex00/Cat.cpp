/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:40:06 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/10 10:31:28 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Cat.hpp"

Cat::Cat(void)
{
	this->_type = "Cat";
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat(const Cat& other)
	:	Animal(other)
{
	this->_type = other.getType();
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called." << std::endl;
}

std::string	Cat::getType(void) const
{
	return (this->_type);
}

void	Cat::makeSound(void) const
{
	std::cout << "meow" << std::endl;
}

Cat&	Cat::operator=(const Cat &other)
{
	std::cout << "Cat assignment operator called." << std::endl;
	this->_type = other.getType();
	return (*this);
}
