/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:49:41 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/10 11:07:33 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class	Brain
{

public:

	std::string	ideas[100];

	Brain(void);
	Brain(const Brain& other);
	~Brain(void);
	std::string	getIdea(int index) const;
	Brain&		operator=(const Brain& other);

};

#endif
