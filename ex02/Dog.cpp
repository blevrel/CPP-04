/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:38:45 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/09 14:48:29 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Dog.hpp"

Dog::Dog(void)
{
	this->brain = new Brain();
	this->type = "Dog";
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	this->type = other.getType();
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog::~Dog(void)
{
	delete this->brain;
	std::cout << "Dog destructor called." << std::endl;
}

std::string	Dog::getType(void) const
{
	return (this->type);
}

void	Dog::makeSound(void) const
{
	std::cout << "woof" << std::endl;
}

void	Dog::printIdeas(void) const
{
		for (int i = 0; i < 100; i++)
		std::cout << this->getType() << " idea " << i + 1 << ": "<< this->brain->ideas[0] << std::endl;
}

Dog&	Dog::operator=(const Dog &other)
{
	std::cout << "Dog assignment operator called." << std::endl;
	this->type = other.getType();
	return (*this);
}
