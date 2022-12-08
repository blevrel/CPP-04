/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:16:48 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/08 17:34:44 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Animal.hpp"

class	Cat : public Animal
{

public:

	Cat(void);
	Cat(const Cat& other);
	~Cat(void);
	std::string	getType(void) const;
	void	makeSound(void) const;
	Cat& 		operator=(const Cat& other);
};
