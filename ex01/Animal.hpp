/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:13:47 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/10 10:30:06 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>

class	Animal
{

protected:

	std::string	type;

public:

	Animal(void);
	Animal(const Animal& other);
	virtual	~Animal(void);
	std::string	getType(void) const;
	virtual void	makeSound(void) const;
	virtual void	printIdeas(void) const;
	Animal& 	operator=(const Animal& other);
};
