/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 15:04:03 by nuno              #+#    #+#             */
/*   Updated: 2024/06/02 18:34:10 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

Character::Character (void) : _name(""){
	std::cout << "Character default constructor called..." << std::endl;
	for (int i = 0; i < INV; i++)
		_inventory[i] = NULL;
	for (int i = 0; i < DRO; i++)
		_dropped[i] = NULL;
}

Character::Character (std::string const &name) : _name(name) {
	std::cout << "Character constructor with parameter name called for " << name << "..." <<std::endl;
	for (int i = 0; i < INV; i++)
		_inventory[i] = NULL;
	for (int i = 0; i < DRO; i++)
		_dropped[i] = NULL;
}

Character::Character (Character const &obj) : _name(obj.getName()) {
	std::cout << "Character copy constructor called..." << std::endl;
	for (int i = 0; i < INV; i++) {
		if (_inventory[i])
			delete _inventory[i];
		if (obj._inventory[i])
			_inventory[i] = obj._inventory[i]->clone();
	}
		for (int i = 0; i < DRO; i++) {
		if (_dropped[i])
			delete _dropped[i];
		if (obj._dropped[i])
			_dropped[i] = obj._dropped[i]->clone();
	}
}

Character& Character::operator = (Character const &obj) {
	std::cout << "Character assignment operator called..." << std::endl;
	if (this != &obj) {
		_name = obj._name;
		for (int i = 0; i < INV; i++) {
			if (_inventory[i])
				delete _inventory[i];
			if (obj._inventory[i])
				_inventory[i] = obj._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
		for (int i = 0; i < DRO; i++) {
			if (_dropped[i])
				delete _dropped[i];
			if (obj._dropped[i])
				_dropped[i] = obj._dropped[i]->clone();
			else
				_dropped[i] = NULL;
		}
	}
	return (*this);
}

Character::~Character(void) {
	std::cout << "Character default destructor called." << std::endl;
	for (int i = 0; i < INV; i++)
		if (_inventory[i])
			delete _inventory[i];
	for (int i = 0; i < DRO; i++)
		if (_dropped[i])
			delete _dropped[i];
}

////////////SUBJECT MEMBER FUNCTIONS////////////
void Character::equip(AMateria* m) {
	if (m) {
		for (int i = 0; i < INV; i++)
			if (!_inventory[i]) {
				_inventory[i] = m;
				break ;
			}
		std::cout << "Character " << _name << " equiped with " << m->getType() << std::endl;
	}
}

void Character::storeDropped(AMateria* d) {
	if (d)
		for (int i = 0; i < DRO; i++)
			if (!_dropped[i]) {
				_dropped[i] = d;
				break;
			}
	std::cout << d->getType() << " memory stored in array of droppeds "<< std::endl;
}

void Character::unequip(int idx) {
	if (_inventory[idx] && idx < 4 && idx >= 0) {
		_inventory[idx] = NULL;
		std::cout << "Character " << _name << " dropped " << _inventory[idx]->getType() << std::endl;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (_inventory[idx] && idx < 4 && idx >= 0)
		_inventory[idx]->use(target);

}

//////////////GETTERS AND SETTERS///////////////
const std::string& Character::getName() const {
	return(_name);
}