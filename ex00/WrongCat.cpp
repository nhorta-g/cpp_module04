# include "WrongCat.hpp"

//////////////////CONSTRUCTORS//////////////////

WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {
	std::cout << "WrongCat Default constructor called...\nMiauuu!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &original) : WrongAnimal(original.getType()) {
	std::cout << "WrongCat copy constructor called...\nMiauuu!" << std::endl;
	*this = original;
}

WrongCat& WrongCat::operator = (const WrongCat &original) {
	std::cout << "WrongCat assigment operator called...\nMiauuu!" << std::endl;
	this->_type = original._type;
	return (*this);
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat Default destructor called...\nMiauuu!" << std::endl;
}

////////////SUBJECT MEMBER FUNCTIONS////////////

void WrongCat::makeSound(void) const{
	std::cout << "MIAU, MIAU, MIIIAAAAAAAUUUU!" << std::endl;
}

////////////GETTERS///////////

std::string	WrongCat::getType() const{
	return (this->_type);
}
