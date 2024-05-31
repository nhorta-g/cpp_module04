/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:51:41 by nuno              #+#    #+#             */
/*   Updated: 2024/05/30 17:51:42 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"

//////////////////CONSTRUCTORS//////////////////

WrongAnimal::WrongAnimal(void) : _type("Just parent WrongAnimal") {
	std::cout << "WrongAnimal default constructor called..." << std::endl;
}

/*
WrongAnimal::WrongAnimal(std::string type) : _type(type) {
    std::cout << "WrongAnimal constructor called with type " << this->_type << std::endl;
}*/

WrongAnimal::WrongAnimal(const WrongAnimal &copy)  : _type(copy._type){
	std::cout << "WrongAnimal copy constructor called..." << std::endl;
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal &copy) {
	std::cout << "WrongAnimal assignment operator called..." << std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal default destructor called..." << std::endl;
}

////////////SUBJECT MEMBER FUNCTIONS////////////

void WrongAnimal::makeSound(void) const{
	std::cout << "Parent class sound from wrong animal";
}

//////////////GETTERS AND SETTERS///////////////

std::string WrongAnimal::getType(void) const {
	return(_type);
}
