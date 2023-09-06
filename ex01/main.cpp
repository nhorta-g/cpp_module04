# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "Brain.hpp"

int main()
{
	{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	...
	return 0;

	std::cout << "CONSTRUCTORS:" << std::endl << std::endl;

	int num = 4;
	Animal *array[num];

	for (int i = 0; i < num; i++) {
		if (i % 2 == 0)
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}
	std::cout << "------------" << std::endl;

	std::cout << std::endl << "DESTRUCTORS:" << std::endl << std::endl;

	for (int i = 0; i < num; i++)
		delete array[i];

	/////////////Wrong Cat///////////////
	return 0;
}
