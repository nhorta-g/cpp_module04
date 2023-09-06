# include "WrongAnimal.hpp"

//////////////////CONSTRUCTORS//////////////////

WrongAnimal::WrongAnimal(void) {
	this->_type = "WrongAnimal";
	std::cout << "WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {
    std::cout << "WrongAnimal constructor called with type " << this->_type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	*this = copy;
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal &copy) {
	std::cout << "WrongAnimal assignment operator called." << std::endl;
	this->_type = copy._type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal default destructor called." << std::endl;
}

////////////SUBJECT MEMBER FUNCTIONS////////////

void WrongAnimal::makeSound(void) const{
	std::cout << "WrongAnimal playing it's sound." << std::endl;
}

//////////////GETTERS AND SETTERS///////////////

std::string WrongAnimal::getType(void) const {
	return(_type);
}
