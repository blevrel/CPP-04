/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 14:49:40 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/08 16:32:00 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>

class	WrongAnimal
{

protected:

	std::string	type;

public:

	WrongAnimal(void);
	WrongAnimal(const WrongAnimal& other);
	virtual	~WrongAnimal(void);
	std::string	getType(void) const;
	virtual void	makeSound(void) const;
	WrongAnimal& 	operator=(WrongAnimal& other);
};
