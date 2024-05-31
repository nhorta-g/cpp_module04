/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:50:40 by nuno              #+#    #+#             */
/*   Updated: 2024/05/30 17:50:41 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal {
	public:
		Cat (void);
		Cat (const Cat &copy);
		Cat &operator = (const Cat &copy);
		~Cat (void);

		void makeSound(void) const;

		void setIdea(std::string idea);
		void showIdea(void) const;

	private:
		Brain *_brain;
};

#endif
