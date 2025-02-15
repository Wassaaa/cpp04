#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat Default Constructor called\n";
	this->type = "Cat";
}

//copy constructor
Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Cat Copy Constructor called\n";
}

//copy assignment
Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat Copy Assignment Operator called\n";
	if (this == &other)
		return (*this);
	Animal::operator=(other);
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called\n";
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}