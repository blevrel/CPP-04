/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:49:41 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/09 14:35:01 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>

class	Brain
{

public:

	std::string*	ideas;

	Brain(void);
	Brain(const Brain& other);
	~Brain(void);
	std::string*	getIdeas(void) const;
	Brain&			operator=(const Brain& other);

};
