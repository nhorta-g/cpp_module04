# include "Dog.hpp"

//////////////////CONSTRUCTORS//////////////////

Dog::Dog(void) : Animal("Dog") {
	std::cout << "Dog Default constructor called...\n" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy.getType()) {
	std::cout << "Dog copy constructor called...\n" << std::endl;
	*this = copy;
}

Dog& Dog::operator = (const Dog &copy) {
	std::cout << "Dog assigment operator called...\n" << std::endl;
	this->_type = copy._type;
	return (*this);
}

Dog::~Dog(void) {
	std::cout << "Dog Default destructor called...\n" << std::endl;
}

////////////SUBJECT MEMBER FUNCTIONS////////////

void Dog::makeSound(void) const{
	std::cout << "WOOFFFF, WOOOFFFFF, WOOOOOOFFFFFF!!!" << std::endl;
}
