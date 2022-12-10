/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 10:47:00 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/10 11:44:31 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>

class	AMateria
{

protected:

	std::string	type;

public:

	AMateria(void);
	AMateria(std::string const & type);
	AMateria(AMateria const & other);
	~AMateria(void);

	std::string const & getType() const; //Returns the materia type

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter & target);

	AMateria&	operator=(AMateria & other);

};
