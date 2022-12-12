/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 12:13:53 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/10 13:03:28 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ICharacter.hpp"

Character::Character(void)
{
	int	i;

	this->name = "Default_name";
	for (i = 0; i < 4; i++);
		this->inventory[i] = NULL;
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string const & name)
{
	int	i;

	this->name = name;
	for (i = 0; i < 4; i++);
		this->inventory[i] = NULL;
	std::cout << "Character name constructor called" << std::endl;
}

Character::Character(Character const & other)
{

	this->type = other.getName;
	this->inventory = other.getInventory();
	std::cout << "Character copy constructor called" << std::endl;
}

Character::~Character(void)
{
	int	i;

	for (i = 0; i < 4; i++);
		delete this->inventory[i];
	std::cout << "Character destructor called" << std::endl;
}

std::string const & Character::getName(void) const
{
	return (this->name);
}


AMateria** const & Character::getInventory(void) const
{
//si ca marche pas, return les lignes une par une
	return (this->inventory);
}

void	Character::equip(AMateria* m)
{
	int	i;

	i = 0;
	while (this->inventory[i] && i < 4)
		i++;
	if (i == 4)
		std::cout << "Inventory is full" << std::endl;
	else
		this->inventory[i] = m;
}

void	Character::unequip(int idx)
{
	if (this->inventory[idx])
	{
		//sauvegarder l'adresse du materia pour pouvoir le delete plus tard
		this->inventory[idx] = NULL;
	}
	else
		std::cout << "No Materia in slot " << idx << " of inventory" << std::endl;
}

void	Character::use(int idx, ICharacter & target)
{
		if (this->inventory[idx])
			this->inventory[idx].use(target);
		else
			std::cout << "No Materia to use in slot " << idx << " of inventory" << std::endl;
}

Character::operator=(Character & other)
{
	this->name = other.getName();
	std::cout << "Character assignment operator called" << std::endl;
	return (*this);
}
