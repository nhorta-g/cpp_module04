# include "Animal.hpp"

//////////////////CONSTRUCTORS//////////////////

Animal::Animal(void) : _type("Just parent Animal") {
	std::cout << "Animal default constructor called..." << std::endl;
}
/*
Animal::Animal(std::string type) : _type(type) {
    std::cout << "Animal constructor called with type " << this->_type << std::endl;
}
*/
Animal::Animal(const Animal &copy) : _type(copy._type) {
	std::cout << "Animal copy constructor called..." << std::endl;
}

Animal& Animal::operator = (const Animal &copy) {
	std::cout << "Animal assignment operator called..." << std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

Animal::~Animal(void) {
	std::cout << "Animal default destructor called." << std::endl;
}

////////////SUBJECT MEMBER FUNCTIONS////////////

void Animal::makeSound(void) const{
	std::cout << "Parent class animal makesound()." << std::endl;
}

//////////////GETTERS AND SETTERS///////////////

std::string Animal::getType(void) const {
	return(_type);
}
