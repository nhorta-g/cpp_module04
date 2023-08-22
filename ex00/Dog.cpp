# include "Dog.hpp"

Dog::Dog(void) {
	std::cout << "Dog Default constructor called... \n WOF WOF!" << std::endl;
	_type = "Dog";
}

Dog::Dog(const Dog &original) {
	std::cout << "Dog copy constructor called... \n WOF WOF!" << std::endl;
	_type = "Dog";
}

Dog& Dog::operator = Dog(const Dog &original) {
	std::cout << "Dog assigment operator called... \n WOF WOF!" << std::endl;
	_type = "Dog";
}

Dog::~Dog(void) {
	std::cout << "Dog Default destructor called... \n WOF WOF!" << std::endl;
}
