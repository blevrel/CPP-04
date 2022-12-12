#include <iostream>

class	MateriaSource
{

private:

	AMateria*	known[4];

public

	MateriaSource(void);
	~MateriaSource(void);
	MateriaSource(MateriaSource & other);
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);


	MateriaSource & operator=(MateriaSource & other);
};
