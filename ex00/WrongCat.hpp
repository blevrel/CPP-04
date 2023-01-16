/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 14:53:04 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/13 09:24:57 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{

public:

	WrongCat(void);
	WrongCat(const WrongCat& other);
	~WrongCat(void);
	std::string	getType(void) const;
	void		makeSound(void) const;
	WrongCat& 	operator=(const WrongCat& other);
};

#endif
