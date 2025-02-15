#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default Constructor called\n";
}

//copy constructor
Brain::Brain(const Brain& other)
{
	std::cout << "Brain Copy Constructor called\n";
	//copy stuff
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
}

//copy assignment
Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Brain Copy Assignment Operator called\n";
	if (this == &other)
		return (*this);
	//copy stuff
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called\n";
}