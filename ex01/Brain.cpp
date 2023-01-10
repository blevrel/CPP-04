/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 10:41:24 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/10 11:32:45 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Brain.hpp"

Brain::Brain(void)
{
	int	i;

	for (i = 0; i < 100; i++)
		this->ideas[i] = "💡";
	std::cout << "Brain default constructor called and filled with ideas" << std::endl;
}

Brain::Brain(const Brain& other)
{
	int	i;

	for (i = 0; i < 100; i++)
		this->ideas[i] = other.getIdea(i);
	std::cout << "Brain copy constructor called." << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called." << std::endl;
}

std::string	Brain::getIdea(int index) const
{
	return (this->ideas[index]);
}

Brain&	Brain::operator=(const Brain &other)
{
	int	i;

	std::cout << "Brain assignment operator called." << std::endl;
	for (i = 0; i < 100; i++)
		this->ideas[i] = other.getIdea(i);
	return (*this);
}
