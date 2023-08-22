#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog (void);
		Dog (const Dog &original);
		Dog &operator = (const Dog &original);
		~Dog (void);
	protected:
		std::string type;
};

#endif
