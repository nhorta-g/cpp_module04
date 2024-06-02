/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:53:26 by nuno              #+#    #+#             */
/*   Updated: 2024/06/02 18:26:34 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("Parent, Amateria, Default") {
	std::cout << "AMateria default constructor called..." << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type){
	std::cout << "AMateria default constructor called..." << std::endl;
}

AMateria::AMateria(AMateria const &copy) : _type(copy._type) {
	std::cout << "AMateria copy constructor called..." << std::endl;
}

AMateria& AMateria::operator = (AMateria const &copy) {
	std::cout << "AMateria assignment operator called..." << std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

AMateria::~AMateria(void) {
	std::cout << "AMateria default destructor called." << std::endl;
}

std::string const &AMateria::getType(void) const {
	return(_type);
}

void AMateria::use(ICharacter& target) {
	std::cout << "* uses materia on " << target.getName() << " *" << std::endl;
}