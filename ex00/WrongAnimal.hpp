/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:51:45 by nuno              #+#    #+#             */
/*   Updated: 2024/05/30 17:51:46 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>
class WrongAnimal {
	public:
		WrongAnimal (void);
		//WrongAnimal (std::string type);
		WrongAnimal (const WrongAnimal &copy);
		WrongAnimal &operator = (const WrongAnimal &copy);
		~WrongAnimal (void);

		void makeSound(void) const;

		std::string getType(void) const;

	protected:
		std::string _type;
};
#endif
