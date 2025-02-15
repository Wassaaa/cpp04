#include "Cat.hpp"

Cat::Cat() : Animal(), brain(new Brain())
{
	std::cout << "Cat Default Constructor called\n";
	this->type = "Cat";
}

//copy constructor
Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Cat Copy Constructor called\n";
	this->brain = new Brain(*other.brain);
}

//copy assignment
Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat Copy Assignment Operator called\n";
	if (this == &other)
		return (*this);
	Animal::operator=(other);
	delete this->brain;
	this->brain = new Brain(*other.brain);

	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called\n";
	delete brain;
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}