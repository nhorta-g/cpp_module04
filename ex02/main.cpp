/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:52:41 by nuno              #+#    #+#             */
/*   Updated: 2024/05/30 17:52:42 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

#define ARRAY_SIZE 4

void test_delete_aAnimalArray() {
	std::cout << std::endl << RED << "-------------TEST DELETE AANIMAL ARRAY--------------" << RESET << std::endl;
	std::cout << std::endl << GREEN <<"------------------CONSTRUCTORS:--------------------" << RESET << std::endl;

	const AAnimal* AanimalArray[ARRAY_SIZE];

	// Fill half the array with Dog objects and the other half with Cat objects
	for (int i = 0; i < ARRAY_SIZE / 2; ++i) {
		AanimalArray[i] = new Dog();
	}
	for (int i = ARRAY_SIZE / 2; i < ARRAY_SIZE; ++i) {
		AanimalArray[i] = new Cat();
	}
	std::cout << std::endl << CYAN << "-------------------DESTRUCTORS:--------------------" << RESET << std::endl;
	// Delete every AAnimal in the array
	for (int i = 0; i < ARRAY_SIZE; ++i) {
		delete AanimalArray[i];
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
	test_delete_aAnimalArray();
	test_deep_copy();
}
