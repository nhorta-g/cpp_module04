/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:49:59 by nuno              #+#    #+#             */
/*   Updated: 2024/05/31 19:08:20 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Shallow Copy and deep copy:

In shallow copy, an object is created by simply copying the data of all
variables of the original object. This works well if none of the variables
of the object are defined in the heap section of memory. If some variables
are dynamically allocated memory from heap section, then the copied object
variable will also reference the same memory location.
This will create ambiguity and run-time errors, dangling pointer. Since both
objects will reference to the same memory location, then change made by one
will reflect those change in another object as well. Since we wanted to
create a replica of the object, this purpose will not be filled by Shallow copy.
*/

# include "Cat.hpp"

//////////////////CONSTRUCTORS//////////////////

Cat::Cat(void) : _brain(new Brain) {
	_type = "cat";
	std::cout << "Cat constructor called..." << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy), _brain(new Brain(*copy._brain)) {
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
