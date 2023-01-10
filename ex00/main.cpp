/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:40:57 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/10 10:36:46 by blevrel          ###   ########.fr       */
/*   Updated: 2023/01/09 17:08:16 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal *a = new Animal();
	Animal *b = new Dog();
	Animal *c = new Cat();
	WrongAnimal *d = new WrongCat();
	Cat			*cat_to_cpy = new Cat;
	Animal		e;
	Cat			f;
	Dog			g;
	Cat			h = f;
	Dog			i = g;
	Cat			j(f);
	Dog			k(g);
	WrongCat	l;
	WrongCat	m(l);
	Animal		*cat_cpy = new Cat(*cat_to_cpy);
	Animal		*cat_operator_cpy;
	
	//creating a deep copy of c
	cat_operator_cpy = cat_cpy;
	//deleting 'c' to check that 'cat_cpy' is a deep copy and is independant from 'c'
	delete cat_to_cpy;
	cat_operator_cpy->makeSound();

	//printing type of all the differents instatiations
	std::cout << a->getType() << " " << std::endl;
	std::cout << b->getType() << " " << std::endl;
	std::cout << c->getType() << " " << std::endl;
	std::cout << d->getType() << " " << std::endl;
	std::cout << e.getType() << " " << std::endl;
	std::cout << f.getType() << " " << std::endl;
	std::cout << g.getType() << " " << std::endl;
	std::cout << h.getType() << " " << std::endl;
	std::cout << i.getType() << " " << std::endl;
	std::cout << j.getType() << " " << std::endl;
	std::cout << k.getType() << " " << std::endl;
	std::cout << l.getType() << " " << std::endl;
	std::cout << m.getType() << " " << std::endl;

	a->makeSound();
	b->makeSound();
	c->makeSound();
	d->makeSound();
	e.makeSound();
	f.makeSound();
	g.makeSound();
	h.makeSound();
	i.makeSound();
	j.makeSound();
	k.makeSound();
	l.makeSound();
	m.makeSound();

	delete a;
	delete b;
	delete c;
	delete d;
	delete cat_cpy;

	return (0);
}
