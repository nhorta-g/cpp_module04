/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:09:21 by nuno              #+#    #+#             */
/*   Updated: 2024/06/02 17:22:58 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>

# include "ICharacter.hpp"

class ICharacter;
class AMateria {
	protected:
		std::string _type;

	public:
		AMateria (void);
		AMateria(std::string const & type);
		AMateria (const AMateria &copy);
		AMateria &operator = (AMateria const &copy);
		virtual ~AMateria (void);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif