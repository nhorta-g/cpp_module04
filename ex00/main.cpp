# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"

void basic_test(void) {
	std::cout << std::endl << RED << "---------------TEST CORRECT CLASS------------------" << RESET << std::endl;
	std::cout << std::endl << GREEN <<"------------------CONSTRUCTORS:--------------------" << RESET << std::endl;
	const Animal* meta = new Animal();
	const Animal animal;
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl << YELLOW << "---------------------GETTYPE-----------------------" << RESET << std::endl;
	std::cout << dog->getType() << "                <- (Should print dog)" << std::endl;
	std::cout << cat->getType() << "                <- (Should print cat)" << std::endl;
	std::cout << meta->getType() << " <- (Should print parent animal)" << std::endl;
	std::cout << animal.getType() << " <- (Should print parent animal)" << std::endl;

	std::cout << std::endl << YELLOW << "--------------------MAKESOUND----------------------" <<RESET << std::endl;
	cat->makeSound(); //will output the dog sound!
	dog->makeSound(); //will output the cat sound!
	meta->makeSound(); //will output the animal sound!

	std::cout << std::endl << CYAN << "-------------------DESTRUCTORS:--------------------" << RESET << std::endl;
	delete dog;
	delete cat;
	delete meta;
}

void wrong_cat_test(void) {
	std::cout << std::endl << RED << "-----------------TEST WRONG CLASS------------------" << RESET << std::endl;
	std::cout << std::endl <<  GREEN << "-------------WRONG CASE CONSTRUCTORS:--------------" << RESET << std::endl;
	const WrongAnimal* wrong = new WrongAnimal();
	const WrongAnimal* wrongcat = new WrongCat();

	std::cout << std::endl << YELLOW << "----------------WRONG CASE GETTYPE-----------------" << RESET << std::endl;
	std::cout << wrongcat->getType() <<  std::endl;
	std::cout << std::endl << YELLOW << "--------------WRONG CASE MAKESOUND:----------------" << RESET << std::endl;
	//wrong->makeSound();
	wrongcat->makeSound();
	std::cout << " << (It prints the parent Animal" << std::endl <<
		"class makesound(), if makesound was virtual it would print the child class cat sound, MIAUU.)" << std::endl;
	std::cout << std::endl << CYAN << "--------------WRONG CASE DESTRUCTORS:--------------" << RESET << std::endl;
	delete wrong;
	delete wrongcat;
}

void assigment_copy_operator_test(void) {
	std::cout << std::endl << RED << "---------------TEST COPY CONTRUCTOR----------------" << RESET << std::endl;
	std::cout << std::endl << GREEN <<"-------------------CONSTRUCTORS:-------------------" << RESET << std::endl;
	Dog dog1;
	Dog dog2(dog1);

	std::cout << std::endl << YELLOW << "----------------------GETTYPE----------------------" << RESET << std::endl;
	std::cout << dog2.getType() << " <- (Should print dog)" << std::endl;

	std::cout << std::endl << YELLOW << "---------------------MAKESOUND---------------------" <<RESET << std::endl;
	dog2.makeSound(); //will output the dog sound!

	std::cout << std::endl;
	std::cout << CYAN << "-------------------DESTRUCTORS:--------------------" << RESET << std::endl;
}

void assigment_operator_test(void) {
	std::cout << std::endl << RED << "-------------TEST ASSIGMENT OPERATOR---------------" << RESET << std::endl;
	std::cout << std::endl << GREEN <<"-------------------CONSTRUCTORS:-------------------" << RESET << std::endl;
	Cat cat1, cat2;
	cat2 = cat1;

	std::cout << std::endl << YELLOW << "----------------------GETTYPE----------------------" << RESET << std::endl;
	std::cout << cat2.getType() << " <- (Should print dog)" << std::endl;

	std::cout << std::endl << YELLOW << "---------------------MAKESOUND---------------------" <<RESET << std::endl;
	cat2.makeSound(); //will output the cat sound!

	std::cout << std::endl;
	std::cout << CYAN << "-------------------DESTRUCTORS:--------------------" << RESET << std::endl;
}

int main()
{
	basic_test();
	wrong_cat_test();
	assigment_copy_operator_test();
	assigment_operator_test();
	return 0;
}
