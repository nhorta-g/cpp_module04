# include "Cat.hpp"

//////////////////CONSTRUCTORS//////////////////

Cat::Cat(void) {
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

void Animal::Animal::makeSound(void) {
	std::cout << "MIAU, MIAU, MIIIAAAAAAAUUUU!" << std::endl;
}
