/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:52:26 by nuno              #+#    #+#             */
/*   Updated: 2024/05/31 19:09:11 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

//////////////////CONSTRUCTORS//////////////////

Cat::Cat(void) : _brain(new Brain) {
	_type = "cat";
	std::cout << "Cat with constructor called..." << std::endl;
}

Cat::Cat(const Cat &copy) : AAnimal(copy), _brain(new Brain(*copy._brain)) {
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat& Cat::operator = (const Cat &copy) {
	std::cout << "Cat assigment operator called." << std::endl;
	if (this != &copy) {
		this->_type = copy.getType();
		delete this->_brain;
		_brain = new Brain(*(copy._brain));
	}
	return (*this);
}

Cat::~Cat(void) {
	delete _brain;
	std::cout << "Cat Default destructor called..." << std::endl;
}

////////////SUBJECT MEMBER FUNCTIONS////////////

void Cat::makeSound(void) const {
	std::cout << "MIIIAAAAAAAUUUU!";
}

////////////GETTERS AND SETTERS///////////

void Cat::setIdea(std::string idea) {
	this->_brain->setIdea(idea);
}

void Cat::showIdea(void) const {
	this->_brain->showIdea();
}
