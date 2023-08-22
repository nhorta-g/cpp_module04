#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal {
	public:
		Animal (void);
		Animal (const Animal &original);
		Animal &operator = (const Animal &original);
		~Animal (void);

		std::string getType(void);
	protected:
		std::string type;
};
#endif
