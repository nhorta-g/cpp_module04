# include "Animal.hpp"

//////////////////CONSTRUCTORS//////////////////

Animal::Animal(void) {
	this->_type = "Animal";
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(std::string type) : _type(type) {
    std::cout << "Animal constructor called with type " << this->_type << std::endl;
}

Animal::Animal(const Animal &copy) {
	std::cout << "Animal copy constructor called." << std::endl;
	*this = copy;
}

Animal& Animal::operator = (const Animal &copy) {
	std::cout << "Animal assignment operator called." << std::endl;
	this->_type = copy._type;
	return (*this);
}

Animal::~Animal(void) {
	std::cout << "Animal default destructor called." << std::endl;
}

//////////////GETTERS AND SETTERS///////////////

std::string Animal::getType(void) const {
	return(_type);
}
