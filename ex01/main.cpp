#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

#define NUMBER_ANIMALS 4

void test_simple_leaks(void)
{
	std::cout << std::endl <<  std::endl << "############TEST BASIC LEAKS################" << std::endl << std::endl;
	std::cout <<"---------------CONSTRUCTORS CALLED-----------------" << std::endl << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << std::endl;

	std::cout <<"--------------DESTRUCTORS CALLED-----------------" << std::endl << std::endl;
	delete j;
	delete i;
}

void test_array(void)
{
	std::cout << std::endl <<  std::endl << "############TEST LEAKS IN ARRAY OF ANIMALS################" << std::endl << std::endl;
	std::cout <<"---------------CONSTRUCTORS CALLED-----------------" << std::endl << std::endl;
	Animal *animals[NUMBER_ANIMALS];

	for (int i = 0; i < NUMBER_ANIMALS; i++)
	{
		if (i < NUMBER_ANIMALS / 2)
			animals[i] = new Dog;
		else
			animals[i] = new Cat;
	}

	for (int i = 0; i < NUMBER_ANIMALS; i++) {
		std::cout << animals[i]->getType() << std::endl;
		animals[i]->makeSound();
	}

	std::cout << std::endl;

	std::cout << "--------------DESTRUCTORS CALLED-----------------" << std::endl << std::endl;
	for (int i = 0; i < NUMBER_ANIMALS; i++)
	{
		delete animals[i];
	}
}

void test_copy_animals(void)
{
	std::cout << std::endl <<  std::endl << "############TEST COPY ANIMALS################" << std::endl << std::endl;
	std::cout <<"---------------CONSTRUCTORS CALLED-----------------" << std::endl << std::endl;

	Animal* j = new Dog();
	Animal* i = new Cat();

	std::cout << std::endl;
	*i = *j;
	std::cout << std::endl;

	std::cout << "--------------DESTRUCTORS CALLED-----------------" << std::endl << std::endl;
	delete i;
	delete j;
}

int main(void) {
	//test_simple_leaks();
	test_array();
	//test_copy_animals();
}
