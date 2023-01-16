/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:40:57 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/16 10:34:24 by blevrel          ###   ########.fr       */
/*                                                                            */
/*                                                                            */
/* ************************************************************************** */
#include "Dog.hpp"
#define ARR_SIZE 10 

int main()
{
	int	i;
	Animal	*arr[ARR_SIZE];
	Dog		*a = new Dog;
	Animal	*a_deep_cpy = new Dog(*a);
	Animal	*a_operator_cpy = new Dog;

	*a_operator_cpy = *a_deep_cpy;

	//testing deep copy of dog
	a->makeSound();
	delete a;
	a_deep_cpy->makeSound();
	a_operator_cpy->makeSound();
	delete a_deep_cpy;
	delete a_operator_cpy;

	//filling array with half cats half dogs and printing the ideas of two as an example
	for (i = 0; i < ARR_SIZE / 2; i++)
		arr[i] = new Dog();
	for (i = ARR_SIZE / 2; i < ARR_SIZE; i++)
		arr[i] = new Cat();
	for (i = 0; i < ARR_SIZE; i++)
		std::cout << arr[i]->getType() << std::endl;
	arr[0]->printIdeas();
	arr[ARR_SIZE - 1]->printIdeas();
	for (i = 0; i < ARR_SIZE; i++)
		delete arr[i];

	return (0);
}
