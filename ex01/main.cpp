#include "Cat.hpp"
#include "Dog.hpp"

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
	delete (cat1);
	delete (cat2);
	for (int i = 0; i < 10; i++)
		delete array[i];
}