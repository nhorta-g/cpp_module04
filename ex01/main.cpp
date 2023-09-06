# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "Brain.hpp"

int main()
{
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
