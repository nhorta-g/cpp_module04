# include "AAnimal.hpp"

//////////////////CONSTRUCTORS//////////////////

AAnimal::AAnimal(void) : _type("Just parent AAnimal") {
	std::cout << "AAnimal default constructor called..." << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy) : _type(copy._type) {
	std::cout << "AAnimal copy constructor called..." << std::endl;
}

AAnimal& AAnimal::operator = (const AAnimal &copy) {
	std::cout << "AAnimal assignment operator called..." << std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

AAnimal::~AAnimal(void) {
	std::cout << "AAnimal default destructor called." << std::endl;
}

////////////SUBJECT MEMBER FUNCTIONS////////////

void AAnimal::makeSound(void) const{
	std::cout << "Parent class AAnimal makesound()." << std::endl;
}

//////////////GETTERS AND SETTERS///////////////

std::string AAnimal::getType(void) const {
	return(_type);
}
