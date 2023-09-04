# include "Animal.hpp"

//////////////////CONSTRUCTORS//////////////////

Animal::Animal(void) {
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(const Animal &original) {
	std::cout << "Animal copy constructor called." << std::endl;
	*this = original;
}

Animal& Animal::operator = (const Animal &original) {
	std::cout << "Animal assignment operator called." << std::endl;
	this->_type = original._type;
	return (*this);
}

Animal::~Animal(void) {
	std::cout << "Animal default destructor called." << std::endl;
}

////////////SUBJECT MEMBER FUNCTIONS////////////

void Animal::makeSound(void) const{
	std::cout << "Animal playing it's sound." << std::endl;
}

//////////////GETTERS AND SETTERS///////////////

std::string Animal::getType(void) const {
	return(_type);
}
