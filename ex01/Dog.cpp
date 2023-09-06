# include "Dog.hpp"

//////////////////CONSTRUCTORS//////////////////

Dog::Dog(void) : Animal("Dog") {
	std::cout << "Dog Default constructor called...\nWOF WOF!" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy.getType()) {
	std::cout << "Dog copy constructor called...\nWOF WOF!" << std::endl;
	*this = copy;
}

Dog& Dog::operator = (const Dog &copy) {
	std::cout << "Dog assigment operator called...\nWOF WOF!" << std::endl;
	this->_type = copy._type;
	return (*this);
}

Dog::~Dog(void) {
	std::cout << "Dog Default destructor called...\nWOF WOF!" << std::endl;
}

////////////SUBJECT MEMBER FUNCTIONS////////////

void Dog::makeSound(void) const{
	std::cout << "WOOFFFF, WOOOFFFFF, WOOOOOOFFFFFF!!!" << std::endl;
}

////////////GETTERS///////////

std::string	Dog::getType() const{
	return (this->_type);
}
