/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:09:21 by nuno              #+#    #+#             */
/*   Updated: 2024/05/31 19:31:09 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>

# include "ICharacter.hpp"
# include "Cure.hpp"
# include "Ice.hpp"

#define RED "\033[1m\033[31m"
#define YELLOW "\033[33m"
#define GREEN "\033[1;32m"
#define BLUE "\033[0;34m"
#define MAGENTA "\033[0;35m"
#define CYAN "\033[0;36m"
#define RESET "\033[0m"

class AMateria {
	protected:
		std::string _type;

	public:
		AMateria (void);
		AMateria(std::string const & type);
		AMateria (const AMateria &copy);
		AMateria &operator = (const AMateria &copy);
		virtual ~AMateria (void);
	//[...]

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

	std::string const & getType() const; //Returns the materia type
};

#endif