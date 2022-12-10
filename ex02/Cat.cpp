/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:40:06 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/09 14:48:10 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Cat.hpp"

Cat::Cat(void)
{
	this->brain = new Brain();
	this->type = "Cat";
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	this->type = other.getType();
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat::~Cat(void)
{
	delete this->brain;
	std::cout << "Cat destructor called." << std::endl;
}

std::string	Cat::getType(void) const
{
	return (this->type);
}

void	Cat::makeSound(void) const
{
	std::cout << "meow" << std::endl;
}

void	Cat::printIdeas(void) const
{
	for (int i = 0; i < 100; i++)
		std::cout << this->getType() << " idea " << i + 1 << ": "<< this->brain->ideas[0] << std::endl;
}

Cat&	Cat::operator=(const Cat &other)
{
	std::cout << "Cat assignment operator called." << std::endl;
	this->type = other.getType();
	return (*this);
}
