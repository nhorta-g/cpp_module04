# include "WrongAnimal.hpp"

//////////////////CONSTRUCTORS//////////////////

WrongAnimal::WrongAnimal(void) : _type("Just parent WrongAnimal") {
	std::cout << "WrongAnimal default constructor called..." << std::endl;
}

/*
WrongAnimal::WrongAnimal(std::string type) : _type(type) {
    std::cout << "WrongAnimal constructor called with type " << this->_type << std::endl;
}*/

WrongAnimal::WrongAnimal(const WrongAnimal &copy)  : _type(copy._type){
	std::cout << "WrongAnimal copy constructor called..." << std::endl;
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal &copy) {
	std::cout << "WrongAnimal assignment operator called..." << std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal default destructor called..." << std::endl;
}

////////////SUBJECT MEMBER FUNCTIONS////////////

void WrongAnimal::makeSound(void) const{
	std::cout << "Shouldn't print cause it's the parent's class makesound(), " << std::endl;
	std::cout << "if makesound was virtual that would't happen." << std::endl;
}

//////////////GETTERS AND SETTERS///////////////

std::string WrongAnimal::getType(void) const {
	return(_type);
}
