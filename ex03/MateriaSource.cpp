/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:53:30 by nuno              #+#    #+#             */
/*   Updated: 2024/06/02 16:17:41 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource default constructor called." << std::endl;
	for (int i = 0; i < INV; ++i) {
		_toCopyStore[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource const & src) {
	std::cout << "MateriaSource copy constructor called." << std::endl;
	for (int i = 0; i < INV; ++i) {
		if (src._toCopyStore[i]) {
			_toCopyStore[i] = src._toCopyStore[i]->clone();
		} else {
			_toCopyStore[i] = NULL;
		}
	}
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs) {
	std::cout << "MateriaSource assign operator constructor called." << std::endl;
	if (this != &rhs) {
		for (int i = 0; i < INV; ++i) {
			if (_toCopyStore[i]) {
				delete _toCopyStore[i];
			}
			if (rhs._toCopyStore[i]) {
				_toCopyStore[i] = rhs._toCopyStore[i]->clone();
			} else {
				_toCopyStore[i] = NULL;
			}
		}
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource destructor called." << std::endl;
	for (int i = 0; i < INV; ++i) {
		if (_toCopyStore[i]) {
			delete _toCopyStore[i];
		}
	}
}

void MateriaSource::learnMateria(AMateria* m) {
	if (m)
		for (int i = 0; i < INV; ++i) {
			if (!_toCopyStore[i]) {
				_toCopyStore[i] = m->clone();
				break;
			}
		}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < INV; ++i) {
		if (_toCopyStore[i] && _toCopyStore[i]->getType() == type) {
			return _toCopyStore[i]->clone();
		}
	}
	return NULL;
}