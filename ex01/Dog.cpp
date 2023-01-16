/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:38:45 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/13 11:06:40 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Dog.hpp"

Dog::Dog(void)
	:	_brain(new Brain())
{
	this->_type = "Dog";
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog(const Dog& other)
	:	Animal(other),
		_brain(new Brain(*other.getBrain()))
{
	this->_type = other.getType();
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "Dog destructor called." << std::endl;
}

std::string	Dog::getType(void) const
{
	return (this->_type);
}

Brain	*Dog::getBrain(void) const
{
	return(this->_brain);
}

void	Dog::makeSound(void) const
{
	std::cout << "woof" << std::endl;
}

void	Dog::printIdeas(void) const
{
	for (int i = 0; i < 100; i++)
		std::cout << this->getType() << " idea " << i + 1 << ": "<< this->_brain->ideas[i] << std::endl;
}

Dog&	Dog::operator=(const Dog &other)
{
	std::cout << "Dog assignment operator called." << std::endl;
	this->_brain = new Brain(*other.getBrain());
	this->_type = other.getType();
	return (*this);
}
