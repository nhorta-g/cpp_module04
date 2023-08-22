# include "Animal.hpp"

//////////////////CONSTRUCTORS//////////////////

Animal::Animal(void) {
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(const Animal &original) {
	std::cout << "Animal copy constructor called." << std::endl;
}

Animal& Animal::operator = (const operator &original) {
	std::cout << "Animal assignment operator called." << std::endl;
}

Animal::~Animal(void) {
	std::cout << "Animal default destructor called." << std::endl;
}

//////////////GETTERS AND SETTERS///////////////

std::string Animal::getType(void) {
	return(this->type);
}

////////////SUBJECT MEMBER FUNCTIONS////////////

