#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog Default Constructor called\n";
	this->type = "Dog";
}

//copy constructor
Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Dog Copy Constructor called\n";	
}

//copy assignment
Dog& Dog::operator=(const Dog& other)
{
	if (this == &other)
		return (*this);
	std::cout << "Dog Copy Assignment Operator called\n";
	Animal::operator=(other);
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called\n";
}

void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}