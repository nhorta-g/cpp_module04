/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:52:22 by nuno              #+#    #+#             */
/*   Updated: 2024/05/30 17:52:23 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

# define SIZE_IDEAS 100
class Brain {
	public:
		Brain (void);
		Brain (const Brain &copy);
		Brain &operator = (const Brain &copy);
		~Brain (void);

		void showIdea(void) const;
		void setIdea(const std::string &idea);

	protected: //private?
		std::string _ideas[SIZE_IDEAS];
};

#endif
