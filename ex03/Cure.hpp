/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 11:56:08 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/10 12:07:52 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "AMateria.hpp"
#include "ICharacter.hpp"

class	Cure : public AMateria
{

public:

	Cure(void);
	Cure(std::string	const & type);
	Cure(Cure	const & other);
	~Cure(void);

	Cure*	clone() const;
	void	use(ICharacter & target);

	Cure&	operator=(Cure & other);

};
