# include "Cat.hpp"

//////////////////CONSTRUCTORS//////////////////

Cat::Cat(void) : Animal() {
	std::cout << "Cat Default constructor called...\nMiauuu!" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat &original) : Animal() {
	std::cout << "Cat copy constructor called...\nMiauuu!" << std::endl;
	*this = original;
}

Cat& Cat::operator = (const Cat &original) {
	std::cout << "Cat assigment operator called...\nMiauuu!" << std::endl;
	this->_type = original._type;
	return (*this);
}

Cat::~Cat(void) {
	std::cout << "Cat Default destructor called...\nMiauuu!" << std::endl;
}

////////////SUBJECT MEMBER FUNCTIONS////////////

void Cat::makeSound(void) const{
	std::cout << "MIAU, MIAU, MIIIAAAAAAAUUUU!" << std::endl;
}

////////////GETTERS///////////

std::string	Cat::getType() const{
	return (this->_type);
}
