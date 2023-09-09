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

void test_assigment_operator(void)
{
    std::cout << std::endl << "###############################" << std::endl;
    std::cout << "test_assigment_operator" << std::endl;
    std::cout  << "###############################" << std::endl << std::endl;

    Dog d1;
    d1.setIdea("I am dog");
    Dog d2(d1);
    Cat c1;
    c1.setIdea("I am cat");
    Cat c2(c1);

    d1.showIdea();
    d2.showIdea();
    c1.showIdea();
    c2.showIdea();

    d1 = d2;
    c1 = c2;
    std::cout << std::endl;
}

int main(void) {
	test_simple_leaks();
	test_array();
	test_copy_animals();
	//test_assigment_operator();
}
