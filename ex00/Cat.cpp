# include "Cat.hpp"

Cat::Cat(void) {
	std::cout << "Cat Default constructor called... \n Miauuu!" << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat &original) {
	std::cout << "Cat copy constructor called... \n Miauuu!" << std::endl;
	_type = "Cat";
}

Cat& Cat::operator = Cat(const Cat &original) {
	std::cout << "Cat assigment operator called... \n Miauuu!" << std::endl;
	_type = "Cat";
}

Cat::~Cat(void) {
	std::cout << "Cat Default destructor called... \n Miauuu!" << std::endl;
}
