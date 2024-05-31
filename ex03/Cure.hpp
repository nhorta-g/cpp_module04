/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 21:52:12 by nuno              #+#    #+#             */
/*   Updated: 2024/05/31 19:30:40 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria {
	private:

	public:
		Cure (void);
		Cure (const Cure &obj);
		Cure &operator = (const Cure &obj);
		~Cure(void);

		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif