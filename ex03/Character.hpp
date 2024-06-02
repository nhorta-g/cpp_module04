/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 15:04:07 by nuno              #+#    #+#             */
/*   Updated: 2024/06/02 18:32:16 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
	private:
		std::string	_name;
		AMateria*	_inventory[INV];
		AMateria*	_dropped[DRO];

	public:
		Character (void);
		Character (std::string const &name);
		Character (Character const &obj);
		Character &operator = (Character const &obj);
		virtual ~Character(void);

		std::string const & getName() const;
		void equip(AMateria* m);
		void storeDropped(AMateria* d);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};
#endif