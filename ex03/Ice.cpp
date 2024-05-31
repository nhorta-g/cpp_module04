/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:49:52 by nuno              #+#    #+#             */
/*   Updated: 2024/05/31 19:40:34 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

	Ice::Ice (void) {
		std::cout << "Ice with constructor called..." << std::endl;
		_type = "ice";
	}

	Ice::Ice (const Ice &obj) : AMateria(obj) {
		std::cout << "Ice copy constructor called." << std::endl;
	}

	Ice& Ice::operator = (const Ice &obj) {
		std::cout << "Ice assigment operator called." << std::endl;
	if (this != &obj) {
		this->_type = obj.getType();
	}
	return (*this);
	}

	Ice::~Ice(void) {
		std::cout << "Cat Default destructor called..." << std::endl;
	}


	AMateria* Ice::clone() const {
		return ()
		std::cout << "" << std::endl;
	}

	void Ice::use(ICharacter& target) {
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	}