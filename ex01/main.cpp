#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

#define ARRAY_SIZE 4

void test_delete_animalArray() {
	std::cout << std::endl << RED << "-------------TEST DELETE ANIMAL ARRAY--------------" << RESET << std::endl;
	std::cout << std::endl << GREEN <<"------------------CONSTRUCTORS:--------------------" << RESET << std::endl;

	const Animal* animalArray[ARRAY_SIZE];

	// Fill half the array with Dog objects and the other half with Cat objects
	for (int i = 0; i < ARRAY_SIZE / 2; ++i) {
		animalArray[i] = new Dog();
	}
	for (int i = ARRAY_SIZE / 2; i < ARRAY_SIZE; ++i) {
		animalArray[i] = new Cat();
	}
	std::cout << std::endl << CYAN << "-------------------DESTRUCTORS:--------------------" << RESET << std::endl;
	// Delete every Animal in the array
	for (int i = 0; i < ARRAY_SIZE; ++i) {
		delete animalArray[i];
	}
}
void test_deep_copy() {

	std::cout << std::endl << RED << "-------------------TEST DEEP COPY----------------------" << RESET << std::endl;

	std::cout << std::endl << CYAN << "-------------------COPY CONTRUCTOR--------------------" << RESET << std::endl;

	Dog originalDog;
	originalDog.setIdea("Chase the cat");
	Dog copiedDog(originalDog);

	originalDog.setIdea("Eat the bone");
	copiedDog.showIdea();
	std::cout << YELLOW << " <- Last idea should be: Chase the cat" << RESET << std::endl << std::endl;

	Cat originalCat;
	originalCat.setIdea("Sleep on the sofa");
	Cat copiedCat = originalCat;

	originalCat.setIdea("Climb the tree");
	copiedCat.showIdea();
	std::cout << YELLOW << " <- Last idea should be: Sleep on the sofa" << RESET << std::endl << std::endl;

	std::cout << std::endl << CYAN << "----------------ASSIGMENT OPERATOR-------------------" << RESET << std::endl;

	Dog assignedDog;
	assignedDog = originalDog;

	originalDog.setIdea("Bark at the mailman");
	assignedDog.showIdea();
	std::cout << YELLOW << " <- Last idea should be: Eat the bone" << RESET << std::endl << std::endl;

	Cat assignedCat;
	assignedCat = originalCat;

	originalCat.setIdea("Play with yarn");
	assignedCat.showIdea();
	std::cout << YELLOW << " <- Last idea should be: Climb the tree" << RESET << std::endl <<std::endl;

	std::cout << std::endl << CYAN << "-------------------DESTRUCTORS:--------------------" << RESET << std::endl;
}

int main(void) {
	test_delete_animalArray();
	test_deep_copy();
}
