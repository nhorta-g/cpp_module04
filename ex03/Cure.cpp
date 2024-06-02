/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:53:30 by nuno              #+#    #+#             */
/*   Updated: 2024/06/02 16:16:08 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure (void) : AMateria("cure") {
	std::cout << "Cure with constructor called..." << std::endl;
}

Cure::Cure (Cure const &obj) : AMateria(obj) {
	std::cout << "Cure copy constructor called." << std::endl;
}

Cure& Cure::operator = (Cure const &obj) {
	std::cout << "Cure assigment operator called." << std::endl;
	if (this != &obj)
		AMateria::operator=(obj);
	return (*this);
}

Cure::~Cure(void) {
	std::cout << "Cat Default destructor called..." << std::endl;
}

AMateria* Cure::clone() const {
	std::cout << "Cure cloned sucessfully!" << std::endl;
	return (new Cure(*this));
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}