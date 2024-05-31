/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:51:09 by nuno              #+#    #+#             */
/*   Updated: 2024/05/30 17:51:10 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

#define RED "\033[1m\033[31m"
#define YELLOW "\033[33m"
#define GREEN "\033[1;32m"
#define BLUE "\033[0;34m"
#define MAGENTA "\033[0;35m"
#define CYAN "\033[0;36m"
#define RESET "\033[0m"
class Animal {
	public:
		Animal (void);
		//Animal (std::string type);
		Animal (const Animal &copy);
		Animal &operator = (const Animal &copy);
		virtual ~Animal (void);

		virtual void makeSound(void) const;

		std::string getType(void) const;

	protected:
		std::string _type;
};
#endif
