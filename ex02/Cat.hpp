/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:16:48 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/10 11:24:25 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{

public:

	Cat(void);
	Cat(const Cat& other);
	~Cat(void);
	std::string	getType(void) const;
	Brain		*getBrain(void) const;
	void		makeSound(void) const;
	void		printIdeas(void) const;
	Cat& 		operator=(const Cat& other);

private:

	Brain	*_brain;

};

#endif
