/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:14:50 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/08 17:34:16 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Cat.hpp"

class	Dog : public Animal
{

public:

	Dog(void);
	Dog(const Dog& other);
	~Dog(void);
	std::string	getType(void) const;
	void	makeSound(void) const;
	Dog& 		operator=(const Dog& other);
};
