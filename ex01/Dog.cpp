#include "Dog.hpp"

Dog::Dog() : Animal(), brain(new Brain())
{
	std::cout << "Dog Default Constructor called\n";
	this->type = "Dog";
}

//copy constructor
Dog::Dog(const Dog& other) : Animal(other), brain(new Brain(*other.brain))
{
	std::cout << "Dog Copy Constructor called\n";
}

//copy assignment
Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog Copy Assignment Operator called\n";
	if (this == &other)
		return (*this);
	Animal::operator=(other);
	delete this->brain;
	this->brain = new Brain(*other.brain);
	
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called\n";
	delete brain;
}

void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}