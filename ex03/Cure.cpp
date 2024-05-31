/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:53:30 by nuno              #+#    #+#             */
/*   Updated: 2024/05/31 19:25:17 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

	Cure::Cure (void) {
		std::cout << "Cure with constructor called..." << std::endl;
		_type = "cure";
	}

	Cure::Cure (const Cure &obj) : AMateria(obj) {
		std::cout << "Cure copy constructor called." << std::endl;
	}

	Cure& Cure::operator = (const Cure &obj) {
		std::cout << "Cure assigment operator called." << std::endl;
	if (this != &obj) {
		this->_type = obj.getType();
	}
	return (*this);
	}

	Cure::~Cure(void) {
		std::cout << "Cat Default destructor called..." << std::endl;
	}