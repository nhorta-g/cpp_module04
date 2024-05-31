/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:53:26 by nuno              #+#    #+#             */
/*   Updated: 2024/05/31 18:53:38 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("Just parent AMateria") {
	std::cout << "AMateria default constructor called..." << std::endl;
}

AMateria::AMateria(const AMateria &copy) : _type(copy._type) {
	std::cout << "AMateria copy constructor called..." << std::endl;
}

AMateria& AMateria::operator = (const AMateria &copy) {
	std::cout << "AMateria assignment operator called..." << std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

AMateria::~AMateria(void) {
	std::cout << "AMateria default destructor called." << std::endl;
}

////////////SUBJECT MEMBER FUNCTIONS////////////

AMateria* AMateria::clone() const {
}

void AMateria::use(ICharacter& target) {

}

//////////////GETTERS AND SETTERS///////////////
std::string const &AMateria::getType(void) const { //Returns the materia type
	return(_type);
}
