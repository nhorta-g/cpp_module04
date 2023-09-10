# include "Brain.hpp"

//////////////////CONSTRUCTORS//////////////////

Brain::Brain(void) {
	std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain(const Brain &copy) {
	std::cout << "Brain copy constructor called." << std::endl;
	*this = copy;
}

Brain& Brain::operator = (const Brain &copy) {
	std::cout << "Brain assignment operator called." << std::endl;
	for (int i = 0; i < SIZE_IDEAS; i++)
		this->_ideas[i] = copy._ideas[i];
	return (*this);
}

Brain::~Brain(void) {
	std::cout << "Brain default destructor called." << std::endl;
}

void	Brain::setIdea(std::string idea) {
	for(int i = 0; i < SIZE_IDEAS; i++)
		if (_ideas[i].empty()) {
			_ideas[i] = idea;
			std::cout << "Idea set." << " ... ";
		}
	std::cout << std::endl << std::endl;
}

void	Brain::showIdea(void) {
	for (int i = 0; i < SIZE_IDEAS; i++) {
		if (!this->_ideas[i].empty()) {
			std::cout << this->_ideas[i] << " ... ";
		}
	}
	std::cout << std::endl << std::endl;
}
