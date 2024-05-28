# include "Dog.hpp"

//////////////////CONSTRUCTORS//////////////////

Dog::Dog(void) {
	_type = "Dog";
	std::cout << "Dog with std::string parameter(Dog) constructor called..." << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy) {
	std::cout << "Dog copy constructor called..." << std::endl;
}

Dog& Dog::operator = (const Dog &copy) {
	std::cout << "Dog assigment operator called..." << std::endl;
	if (this != &copy)
		Animal::operator = (copy);
	return (*this);
}

Dog::~Dog(void) {
	std::cout << "Dog Default destructor called..." << std::endl;
}

////////////SUBJECT MEMBER FUNCTIONS////////////

void Dog::makeSound(void) const{
	std::cout << "WOOOOOOFFFFFF!!!" << std::endl;
}
