/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 21:52:12 by nuno              #+#    #+#             */
/*   Updated: 2024/06/02 17:33:09 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure (void);
		Cure (Cure const &obj);
		Cure &operator = (Cure const &obj);
		virtual ~Cure(void);

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif