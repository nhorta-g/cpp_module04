/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:50:44 by nuno              #+#    #+#             */
/*   Updated: 2024/05/31 19:05:38 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Shallow Copy and deep copy:

In shallow copy, an object is created by simply copying the data of all
variables of the original object. This works well if none of the variables
of the object are defined in the heap section of memory. If some variables
are dynamically alloDoged memory from heap section, then the copied object
variable will also reference the same memory loDogion.
This will create ambiguity and run-time errors, dangling pointer. Since both
objects will reference to the same memory loDogion, then change made by one
will reflect those change in another object as well. Since we wanted to
create a replica of the object, this purpose will not be filled by Shallow copy.
*/

# include "Dog.hpp"

//////////////////CONSTRUCTORS//////////////////

Dog::Dog(void) : _brain(new Brain) {
	_type = "Dog";
	std::cout << "Dog constructor called..." << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy), _brain(new Brain(*copy._brain)) {
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
