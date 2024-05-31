/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:51:13 by nuno              #+#    #+#             */
/*   Updated: 2024/05/31 19:06:01 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

//////////////////CONSTRUCTORS//////////////////

Cat::Cat(void) {
	_type = "cat";
	std::cout << "Cat constructor called..." << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy) {
	std::cout << "Cat copy constructor called..." << std::endl;
}

Cat& Cat::operator = (const Cat &copy) {
	std::cout << "Cat assigment operator called..." << std::endl;
	if (this != &copy)
		Animal::operator = (copy);
	return (*this);
}

Cat::~Cat(void) {
	std::cout << "Cat Default destructor called..." << std::endl;
}

////////////SUBJECT MEMBER FUNCTIONS////////////

void Cat::makeSound(void) const{
	std::cout << "MIIIAAAAAAAUUUU!" << std::endl;
}
