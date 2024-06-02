/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 15:04:07 by nuno              #+#    #+#             */
/*   Updated: 2024/06/02 17:27:06 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class AMateria;

class MateriaSource : public IMateriaSource {
	private:
		AMateria *_toCopyStore[INV];

	public:
		MateriaSource (void);
		MateriaSource (std::string const name);
		MateriaSource (MateriaSource const &obj);
		MateriaSource &operator = (MateriaSource const &obj);
		virtual ~MateriaSource();

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif