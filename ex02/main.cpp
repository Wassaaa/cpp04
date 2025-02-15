#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main()
{
	Animal *array[10];

	for (int i = 0; i < 5; i++)
		array[i] = new Cat();
	for (int i = 5; i < 10; i++)
		array[i] = new Dog();

	Cat *cat1 = new Cat();
	Cat *cat2 = new Cat(*cat1);
	Cat *cat3 = cat1;

	// Animal animal = new Animal();

	std::cout << "cat1 brain address: " << cat1->getBrain() << std::endl;
	std::cout << "cat2 brain address: " << cat2->getBrain() << std::endl;
	std::cout << "cat3 brain address: " << cat3->getBrain() << std::endl;

	delete cat1;
	delete cat2;

	for (int i = 0; i < 10; i++)
		delete array[i];

	return 0;
}