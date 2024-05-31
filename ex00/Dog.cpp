/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:51:21 by nuno              #+#    #+#             */
/*   Updated: 2024/05/31 19:05:52 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

//////////////////CONSTRUCTORS//////////////////

Dog::Dog(void) {
	_type = "Dog";
	std::cout << "Dog constructor called..." << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy) {
	std::cout << "Dog copy constructor called..." << std::endl;
}

Dog& Dog::operator = (const Dog &copy) {
	std::cout << "Dog assigment operator called..." << std::endl;
	if (this != &copy)
		Animal::operator = (copy);
	return (*this);
}

Dog::~Dog(void) {
	std::cout << "Dog Default destructor called..." << std::endl;
}

////////////SUBJECT MEMBER FUNCTIONS////////////

void Dog::makeSound(void) const{
	std::cout << "WOOOOOOFFFFFF!!!" << std::endl;
}
