/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:40:57 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/16 10:34:36 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	//next line should cause a compilation error because Animal is now an abstract class and can not be instantiated
	//Animal	*animal = new Animal;
	Dog	a;
	Cat	b;

	a.makeSound();
	b.makeSound();

	a.printIdeas();
	b.printIdeas();
	return (0);
}
