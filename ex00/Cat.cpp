# include "Cat.hpp"

//////////////////CONSTRUCTORS//////////////////

Cat::Cat(void) : Animal("Cat") {
	std::cout << "Cat Default constructor called...\n!" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy.getType()) {
	std::cout << "Cat copy constructor called...\n" << std::endl;
	*this = copy;
}

Cat& Cat::operator = (const Cat &copy) {
	std::cout << "Cat assigment operator called...\n!" << std::endl;
	this->_type = copy._type;
	return (*this);
}

Cat::~Cat(void) {
	std::cout << "Cat Default destructor called...\n!" << std::endl;
}

////////////SUBJECT MEMBER FUNCTIONS////////////

void Cat::makeSound(void) const{
	std::cout << "MIAU, MIAU, MIIIAAAAAAAUUUU!" << std::endl;
}
