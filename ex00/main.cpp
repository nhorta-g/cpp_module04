# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"

void basic_test(void) {
	std::cout << "CONSTRUCTORS:" << std::endl << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Animal animal;

	std::cout << std::endl << "GETTYPE:" << std::endl << std::endl;
	std::cout << j->getType() << " <- (Should print dog)" << std::endl;
	std::cout << i->getType() << " <- (Should print cat)" << std::endl;
	std::cout << meta->getType() << " . " << std::endl;
	std::cout << animal.getType() << " . " << std::endl;

	std::cout << std::endl << "MAKESOUND:" << std::endl << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl << "DESTRUCTORS:" << std::endl << std::endl;
	delete j;
	delete i;
	delete meta;
}
void wrong_cat_test(void) {
	std::cout << std::endl << "WRONG CASE CONSTRUCTORS:" << std::endl << std::endl;
	const WrongAnimal* wrong = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();

	std::cout << std::endl << "WRONG CASE GETTYPE:" << std::endl << std::endl;
	std::cout << k->getType() << " " << std::endl;
	std::cout << std::endl << "WRONG CASE MAKESOUND:" << std::endl << std::endl;
	k->makeSound();
	wrong->makeSound();

	std::cout << std::endl << "WRONG CASE DESTRUCTORS:" << std::endl << std::endl;
	delete wrong;
	delete k;
}

void assigment_operator_test(void) {
	std::cout << std::endl <<  std::endl << "############TEST ASSIGMENT OPERATOR################" << std::endl << std::endl;
	std::cout <<"---------------CONSTRUCTORS CALLED-----------------" << std::endl << std::endl;
    Dog d1;
	Dog d2 = d1;

	std::cout << std::endl << "GETTYPE:" << std::endl << std::endl;
	std::cout << d2.getType() << " <- (Should print dog)" << std::endl;

	std::cout << std::endl << "MAKESOUND:" << std::endl << std::endl;
	d2.makeSound(); //will output the dog sound!

	std::cout << std::endl;
	std::cout << "--------------DESTRUCTORS CALLED-----------------" << std::endl << std::endl;

}

int main()
{
	basic_test();
	wrong_cat_test();
	assigment_operator_test();
	return 0;
}
