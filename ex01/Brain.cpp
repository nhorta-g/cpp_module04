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
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];
	return (*this);
}

Brain::~Brain(void) {
	std::cout << "Brain default destructor called." << std::endl;
}

void	Brain::printIdeas(void) {
	for (int i = 0; i < 100; i++) {
        if (!this->_ideas[i].empty()) {
            std::cout << this->_ideas[i] << std::endl;
        }
    }
}

void	Brain::setIdea(std::string idea) {
	for(int i = 0; i < SIZE_IDEAS; i++)
		if (_ideas[i].empty()) {
			_ideas[i] = idea;
			std::cout << "Idea set." << std::endl;
			return;
		}
}

void	Brain::showIdea(int index) {
	if (index < 0 || index > 99)
		std::cout << "Error, index must be be between 0 and 99" << std::endl;
	else
		std::cout << _ideas[index] << std::endl;
}
