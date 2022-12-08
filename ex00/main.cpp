/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:40:57 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/08 17:48:17 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal* a = new Animal();
	Animal* b = new Dog();
	Animal* c = new Cat();
	WrongAnimal* d = new WrongCat();

	std::cout << a->getType() << " " << std::endl;
	std::cout << b->getType() << " " << std::endl;
	std::cout << c->getType() << " " << std::endl;
	std::cout << d->getType() << " " << std::endl;

	a->makeSound();
	b->makeSound();
	c->makeSound();
	d->makeSound();

	delete a;
	delete b;
	delete c;
	delete d;

	return (0);
}
