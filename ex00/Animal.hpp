#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "Cat.hpp"
# include "Dog.hpp"
# include <string.h>
# include <iostream>

class Animal {
	public:
		Animal (void);
		Animal (const Animal &original);
		Animal &operator = (const Animal &original);
		~Animal (void);

		void makeSound(void);

		std::string getType(void);

	protected:
		std::string _type;
};
#endif
