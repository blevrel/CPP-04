/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 11:41:49 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/10 12:07:33 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "AMateria.hpp"
#include "ICharacter.hpp"

class	Ice : public AMateria
{

public:

	Ice(void);
	Ice(std::string	const & type);
	Ice(Ice	const & other);
	~Ice(void);

	Ice*	clone() const;
	void	use(ICharacter & target);

	Ice&	operator=(Ice & other);

};
