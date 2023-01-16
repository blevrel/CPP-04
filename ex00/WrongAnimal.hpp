/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 14:49:40 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/16 10:28:24 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class	WrongAnimal
{

public:

	WrongAnimal(void);
	WrongAnimal(const WrongAnimal& other);
	~WrongAnimal(void);
	std::string		getType(void) const;
	void	makeSound(void) const;
	std::string		getType(void) const;
	WrongAnimal& 	operator=(const WrongAnimal& other);

protected:

	std::string	_type;

};

#endif
