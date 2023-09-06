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

void	Brain::read(void) {
	for (int i = 0; i < 100; i++) {
        if (!this->_ideas[i].empty()) {
            std::cout << this->_ideas[i] << std::endl;
        }
    }
}

std::string	Brain::getIdeas(int index) {
	if (_ideas[index].empty())
		return (NULL);
	return(_ideas[index]);
}

void		Brain::setIdeas(std::string idea) {
	for(int i = 0; i < 100; i++)
		_ideas[i] = idea;
}
