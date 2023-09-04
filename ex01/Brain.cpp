# include "Brain.hpp"

//////////////////CONSTRUCTORS//////////////////

Brain::Brain(void) {
	std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain(std::string type) {
    std::cout << "Brain constructor called with type " << this->_type << std::endl;
}

Brain::Brain(const Brain &original) {
	std::cout << "Brain copy constructor called." << std::endl;
	*this = original;
}

Brain& Brain::operator = (const Brain &original) {
	std::cout << "Brain assignment operator called." << std::endl;
	return (*this);
}

Brain::~Brain(void) {
	std::cout << "Brain default destructor called." << std::endl;
}

////////////SUBJECT MEMBER FUNCTIONS////////////



//////////////GETTERS AND SETTERS///////////////

