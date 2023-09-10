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
	std::cout << std::endl <<  std::endl << "############TEST ARRAY OF ANIMALS################" << std::endl << std::endl;
	std::cout <<"---------------CONSTRUCTORS CALLED-----------------" << std::endl << std::endl;
	Animal *animals[NUMBER_ANIMALS];

	for (int i = 0; i < NUMBER_ANIMALS; i++)
	{
		if (i < NUMBER_ANIMALS / 2)
		{
			animals[i] = new Dog;
			((Dog *) animals[i])->setIdea("I like barking to neighbours");
		}
		else
		{
			animals[i] = new Cat;
			((Cat *) animals[i])->setIdea("I like puuuuuuuuriiing");
		}
	}

	for (int i = 0; i < NUMBER_ANIMALS; i++) {
		std::cout << "I am nice " << animals[i]->getType() << ", I like to do ";
		animals[i]->makeSound();
		std::cout << " And my thoughts are: ";
		((Cat *)animals[i])->showIdea();
		std::cout << std::endl;
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

void test_copy_contructor(void)
{
	std::cout << std::endl <<  std::endl << "############TEST COPY CONSTRUCTOR################" << std::endl << std::endl;
	std::cout <<"---------------CONSTRUCTORS CALLED-----------------" << std::endl << std::endl;
    Cat c1;
	c1.setIdea("I like chasing mouses!");
	Cat c2(c1);

	std::cout << std::endl << " Ideas from d1: " << std::endl << std::endl;
	c1.showIdea();
	std::cout << " Ideas from d2: " << std::endl<< std::endl;
	c2.showIdea();

	std::cout << std::endl;
	std::cout << "--------------DESTRUCTORS CALLED-----------------" << std::endl << std::endl;
}

void test_assigment_operator(void)
{
	std::cout << std::endl <<  std::endl << "############TEST ASSIGMENT OPERATOR################" << std::endl << std::endl;
	std::cout <<"---------------CONSTRUCTORS CALLED-----------------" << std::endl << std::endl;
    Dog d1;
	d1.setIdea("I am dog");
	Dog d2 = d1;

	std::cout << std::endl << " Ideas from d1: " << std::endl << std::endl;
	d1.showIdea();
	std::cout << " Ideas from d2: " << std::endl<< std::endl;
	d2.showIdea();

	std::cout << std::endl;
	std::cout << "--------------DESTRUCTORS CALLED-----------------" << std::endl << std::endl;
}

int main(void) {
	test_simple_leaks();
	test_array();
	test_copy_animals();
	test_copy_contructor();
	test_assigment_operator();
}
