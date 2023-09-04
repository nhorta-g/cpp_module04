# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"

int main()
{
	std::cout << "CONSTRUCTORS:" << std::endl << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Animal animal;


	std::cout << std::endl << "GETTYPE:" << std::endl << std::endl;
	std::cout << j->getType() << " <- Should print dog" << std::endl;
	std::cout << i->getType() << " <- Should print cat" << std::endl;
	std::cout << meta->getType() << " . " << std::endl;
    std::cout << animal.getType() << " . " << std::endl;

	std::cout << std::endl << "MAKESOUND:" << std::endl << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl << "DESTRUCTORS:" << std::endl << std::endl;
	return 0;
}
