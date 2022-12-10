/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:40:57 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/10 10:39:23 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Dog.hpp"
#include "WrongCat.hpp"
#define ARR_SIZE 10 

int main()
{
	int	i;
	Animal*	arr[ARR_SIZE];
	
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
