/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 21:52:57 by nuno              #+#    #+#             */
/*   Updated: 2024/05/31 19:31:03 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria {
	private:

	public:
		Ice (void);
		Ice (const Ice &obj);
		Ice &operator = (const Ice &obj);
		~Ice(void);

		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif