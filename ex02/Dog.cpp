/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:52:33 by nuno              #+#    #+#             */
/*   Updated: 2024/05/31 19:05:16 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

//////////////////CONSTRUCTORS//////////////////

Dog::Dog(void) : _brain(new Brain) {
	_type = "Dog";
	std::cout << "Dog constructor called..." << std::endl;
}

Dog::Dog(const Dog &copy) : AAnimal(copy), _brain(new Brain(*copy._brain)) {
	std::cout << "Dog copy constructor called..." << std::endl;
}

Dog& Dog::operator = (const Dog &copy) {
	std::cout << "Dog assigment operator called..." << std::endl;
	if (this != &copy) {
		this->_type = copy.getType();
		delete this->_brain;
		_brain = new Brain(*(copy._brain));
	}
	return (*this);
}

Dog::~Dog(void) {
	delete _brain;
	std::cout << "Dog Default destructor called..." << std::endl;
}

////////////SUBJECT MEMBER FUNCTIONS////////////

void Dog::makeSound(void) const{
	std::cout << "WOF WOF WOF!";
}

////////////GETTERS AND SETTERS///////////

void Dog::setIdea(const std::string idea) {
	this->_brain->setIdea(idea);
}

void Dog::showIdea(void) const{
	this->_brain->showIdea();
}
