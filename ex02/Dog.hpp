/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:14:50 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/10 13:50:34 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{

public:

	Dog(void);
	Dog(const Dog& other);
	~Dog(void);
	std::string	getType(void) const;
	Brain		*getBrain(void) const;
	void		makeSound(void) const;
	void		printIdeas(void) const;
	Dog& 		operator=(const Dog& other);

private:

	Brain	*_brain;

};

#endif
