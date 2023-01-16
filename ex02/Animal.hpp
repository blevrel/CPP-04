/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:13:47 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/10 13:45:20 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class	Animal
{

public:

	Animal(void);
	Animal(const Animal& other);
	virtual	~Animal(void);
	std::string	getType(void) const;
	virtual void	makeSound(void) const = 0;
	virtual void	printIdeas(void) const;
	Animal& 		operator=(const Animal& other);

protected:

	std::string	_type;

};

#endif
