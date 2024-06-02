/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:49:52 by nuno              #+#    #+#             */
/*   Updated: 2024/06/02 16:14:33 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice (void) : AMateria("ice") {
	std::cout << "Ice with constructor called..." << std::endl;
}

Ice::Ice (Ice const &obj) : AMateria(obj) {
	std::cout << "Ice copy constructor called." << std::endl;
}

Ice& Ice::operator = (Ice const &obj) {
	std::cout << "Ice assigment operator called." << std::endl;
	if (this != &obj)
		AMateria::operator=(obj);
	return (*this);
}

Ice::~Ice(void) {
	std::cout << "Cat Default destructor called..." << std::endl;
}

AMateria* Ice::clone() const {
	std::cout << "Ice cloned sucessfully!" << std::endl;
	return (new Ice(*this));
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}