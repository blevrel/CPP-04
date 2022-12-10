/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:16:48 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/10 10:11:09 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{

private:

	Brain*	brain;

public:

	Cat(void);
	Cat(const Cat& other);
	~Cat(void);
	std::string	getType(void) const;
	void	makeSound(void) const;
	void	printIdeas(void) const;
	Cat& 		operator=(const Cat& other);
};
