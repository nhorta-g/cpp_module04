/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:51:49 by nuno              #+#    #+#             */
/*   Updated: 2024/05/30 17:51:50 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

//////////////////CONSTRUCTORS//////////////////

WrongCat::WrongCat(void) {
	_type = "WrongCat";
	std::cout << "WrongCat Default constructor called..." << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy) {
	std::cout << "WrongCat copy constructor called..." << std::endl;
}

WrongCat& WrongCat::operator = (const WrongCat &copy) {
	std::cout << "WrongCat assigment operator called..." << std::endl;
	if (this != &copy)
		WrongAnimal::operator = (copy);
	return (*this);
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat Default destructor called..." << std::endl;
}

////////////SUBJECT MEMBER FUNCTIONS////////////

void WrongCat::makeSound(void) const{
	std::cout << "MIIIAAAAAAAUUUU!" << std::endl;
}