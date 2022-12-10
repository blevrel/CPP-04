/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:14:50 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/09 14:47:04 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Cat.hpp"

class	Dog : public Animal
{

private:

	Brain*	brain;

public:

	Dog(void);
	Dog(const Dog& other);
	~Dog(void);
	std::string	getType(void) const;
	void	makeSound(void) const;
	void	printIdeas(void) const;
	Dog& 		operator=(const Dog& other);
};
