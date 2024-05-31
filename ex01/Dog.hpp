/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:50:49 by nuno              #+#    #+#             */
/*   Updated: 2024/05/30 17:53:13 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal {
	public:
		Dog (void);
		Dog (const Dog &copy);
		Dog &operator = (const Dog &copy);
		~Dog (void);

		void makeSound(void) const;

		void setIdea(const std::string idea);
		void showIdea(void) const;

	private:
		Brain* _brain;
};

#endif
