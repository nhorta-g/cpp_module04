/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:51:17 by nuno              #+#    #+#             */
/*   Updated: 2024/05/30 17:51:18 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal {
	public:
		Cat (void);
		Cat (const Cat &copy);
		Cat &operator = (const Cat &copy);
		~Cat (void);

		void makeSound(void) const;
};

#endif
