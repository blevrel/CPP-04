/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 12:04:46 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/10 13:03:04 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "AMateria.hpp"

class	Character : public ICharacter
{

private:

	std::string	name;
	AMateria*	inventory[4];
	AMateria*	full_inventory[1024];

public:

	Character(void);
	Character(Character const & other);
	~Character(void);
	AMateria**	const & getInventory(void) const;
	ICharacter*	operator=(Character & other);

}
