/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:40:57 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/10 10:43:22 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Dog.hpp"
#include "WrongCat.hpp"
#define ARR_SIZE 10 

int main()
{
	//Animal*	animal = new Animal();
	Cat*	cat = new Cat();
	Dog*	dog = new Dog();

	std::cout << cat->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	cat->makeSound();
	dog->makeSound();
	delete cat;
	delete dog;
	return (0);
}
