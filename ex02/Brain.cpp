/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 10:41:24 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/09 14:45:57 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Brain.hpp"

Brain::Brain(void)
{
	int	i;

	this->ideas = new std::string[100];
	for (i = 0; i < 100; i++)
		this->ideas[i] = "💡";
	std::cout << "Brain default constructor called and filled with ideas" << std::endl;
}

Brain::Brain(const Brain& other)
{
	int	i;

	i = 0;
	this->ideas = new std::string[100];
	for (i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
	std::cout << "Brain copy constructor called." << std::endl;
}

Brain::~Brain(void)
{
	delete [] this->ideas;
	std::cout << "Brain destructor called." << std::endl;
}

std::string*	Brain::getIdeas(void) const
{
	return (this->ideas);
}

Brain&	Brain::operator=(const Brain &other)
{
	std::cout << "Brain assignment operator called." << std::endl;
	this->ideas = other.getIdeas();
	return (*this);
}
