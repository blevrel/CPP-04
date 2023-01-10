/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:40:06 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/10 11:30:22 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Cat.hpp"

Cat::Cat(void)
	:	_brain(new Brain())
{
	this->_type = "Cat";
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat(const Cat& other)
	:	Animal(other),
		_brain(new Brain(*other.getBrain()))
{
	this->_type = other.getType();
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "Cat destructor called." << std::endl;
}

std::string	Cat::getType(void) const
{
	return (this->_type);
}

Brain	*Cat::getBrain(void) const
{
	return(this->_brain);
}

void	Cat::makeSound(void) const
{
	std::cout << "meow" << std::endl;
}

void	Cat::printIdeas(void) const
{
	for (int i = 0; i < 100; i++)
		std::cout << this->getType() << " idea " << i + 1 << ": "<< this->_brain->ideas[0] << std::endl;
}

Cat&	Cat::operator=(const Cat &other)
{
	std::cout << "Cat assignment operator called." << std::endl;
	this->_brain = new Brain(*other.getBrain());
	this->_type = other.getType();
	return (*this);
}
