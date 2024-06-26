/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 21:52:57 by nuno              #+#    #+#             */
/*   Updated: 2024/06/02 17:33:02 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice (void);
		Ice (Ice const &obj);
		Ice &operator = (Ice const &obj);
		virtual ~Ice(void);

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif