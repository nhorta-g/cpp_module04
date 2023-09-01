# include "Dog.hpp"

//////////////////CONSTRUCTORS//////////////////

Dog::Dog(void) {
	std::cout << "Dog Default constructor called...\nWOF WOF!" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog &original) : Animal() {
	std::cout << "Dog copy constructor called...\nWOF WOF!" << std::endl;
	*this = original;
}

Dog& Dog::operator = (const Dog &original) {
	std::cout << "Dog assigment operator called...\nWOF WOF!" << std::endl;
	this->_type = original._type;
	return (*this);
}

Dog::~Dog(void) {
	std::cout << "Dog Default destructor called...\nWOF WOF!" << std::endl;
}

////////////SUBJECT MEMBER FUNCTIONS////////////

void Dog::makeSound(void) const{
	std::cout << "WOOFFFF, WOOOFFFFF, WOOOOOOFFFFFF!!!" << std::endl;
}
