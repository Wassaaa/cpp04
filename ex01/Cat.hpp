#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Cat: public Animal
{
public:
	Cat();
	Cat(const Cat& other);
	Cat& operator=(const Cat& other);
	~Cat();
	
	void makeSound() const override;
	Brain* getBrain() const;

private:
	Brain* brain;
};

#endif