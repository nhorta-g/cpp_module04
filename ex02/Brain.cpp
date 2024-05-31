/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:52:18 by nuno              #+#    #+#             */
/*   Updated: 2024/05/30 17:52:19 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

//////////////////CONSTRUCTORS//////////////////

Brain::Brain(void) {
	std::cout << "Brain default constructor called..." << std::endl;
	for (int i = 0; i < SIZE_IDEAS; i++)
		this->_ideas[i] = "";
}

Brain::Brain(const Brain &copy) {
	std::cout << "Brain copy constructor called..." << std::endl;
	for (int i = 0; i < SIZE_IDEAS; i++)
		this->_ideas[i] = copy._ideas[i];
}

Brain& Brain::operator = (const Brain &copy) {
	std::cout << "Brain assignment operator called..." << std::endl;
	if (this != &copy) {
		for (int i = 0; i < SIZE_IDEAS; i++)
			this->_ideas[i] = copy._ideas[i];
	}
	return (*this);
}

Brain::~Brain(void) {
	std::cout << "Brain destructor called..." << std::endl;
}

void	Brain::setIdea(const std::string &idea) {
	for(int i = 0; i < SIZE_IDEAS; i++)
		if (this->_ideas[i].empty()) {
			this->_ideas[i] = idea;
			std::cout << "Idea: " << GREEN << idea << MAGENTA << " > SET" << RESET << std::endl;
			return;
		}
}

void	Brain::showIdea(void) const{
	for (int i = 0; i < SIZE_IDEAS; i++) {
		if (!this->_ideas[i].empty()) {
			std::cout << GREEN << this->_ideas[i] << RESET << std::endl;
		}
	}
}
