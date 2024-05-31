/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 15:04:03 by nuno              #+#    #+#             */
/*   Updated: 2024/05/31 18:31:47 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ICharacter.hpp"

ICharacter::ICharacter (void) {
	std::cout << "ICharacter default constructor called..." << std::endl;
}

ICharacter::ICharacter (const ICharacter &obj) {
	std::cout << "ICharacter copy constructor called..." << std::endl;
}

ICharacter& ICharacter::operator = (const ICharacter &obj) {
	std::cout << "ICharacter assignment operator called..." << std::endl;
}

ICharacter::~ICharacter(void) {
	std::cout << "ICharacter default destructor called." << std::endl;
}

////////////SUBJECT MEMBER FUNCTIONS////////////
void ICharacter::equip(AMateria* m) {

}

void ICharacter::unequip(int idx) {

}

void ICharacter::use(int idx, ICharacter& target) {

}

//////////////GETTERS AND SETTERS///////////////
const std::string& ICharacter::getName() const {