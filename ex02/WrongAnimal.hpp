/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 14:49:40 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/13 09:14:35 by blevrel          ###   ########.fr       */
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
	WrongAnimal& 	operator=(const WrongAnimal& other);

protected:

	std::string	_type;

};

#endif
