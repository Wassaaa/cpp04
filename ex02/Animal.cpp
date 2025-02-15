#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal Default Constructor called\n";
}

// copy constructor
Animal::Animal(const Animal &other) : type(other.type)
{
	std::cout << "Animal Copy Constructor called\n";
}

// copy assignment
Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Animal Copy Assignment Operator called\n";
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called\n";
}

std::string Animal::getType() const
{
	return (this->type);
}
