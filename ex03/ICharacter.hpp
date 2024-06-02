/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 15:04:07 by nuno              #+#    #+#             */
/*   Updated: 2024/06/02 18:15:20 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

#define RED "\033[1m\033[31m"
#define YELLOW "\033[33m"
#define GREEN "\033[1;32m"
#define BLUE "\033[0;34m"
#define MAGENTA "\033[0;35m"
#define CYAN "\033[0;36m"
#define RESET "\033[0m"

# define INV 4
# define DRO 10

class AMateria;
class ICharacter {
	public:
		virtual ~ICharacter(void) {}

		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void storeDropped(AMateria* d) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif