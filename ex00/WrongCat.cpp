#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat Default Constructor called\n";
	this->type = "WrongCat";
}

//copy constructor
WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	std::cout << "WrongCat Copy Constructor called\n";
}

//copy assignment
WrongCat& WrongCat::operator=(const WrongCat& other)
{
	std::cout << "WrongCat Copy Assignment Operator called\n";
	if (this == &other)
		return (*this);
	WrongAnimal::operator=(other);
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called\n";
}

void WrongCat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}