#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	int	i;

	this->name = "Default_name";
	for (i = 0; i < 4; i++);
		this->inventory[i] = NULL;
	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(std::string const & name)
{
	int	i;

	this->name = name;
	for (i = 0; i < 4; i++);
		this->inventory[i] = NULL;
	std::cout << "MateriaSource name constructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const & other)
{
	int	i;

	this->type = other.getName;
	for (i = 0; i < 4; i++);
		
	std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource::~MateriaSource(void)
{
	int	i;

	for (i = 0; i < 4; i++);
		delete this->inventory[i];
	std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource::operator=(MateriaSource & other)
{
	this->name = other.getName();
	std::cout << "MateriaSource assignment operator called" << std::endl;
	return (*this);
}
