/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 14:53:04 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/08 15:42:36 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{

public:

	WrongCat(void);
	WrongCat(const WrongCat& other);
	~WrongCat(void);
	std::string	getType(void) const;
	void	makeSound(void) const;
	WrongCat& 	operator=(WrongCat& other);
};
