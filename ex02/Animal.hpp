#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal {
	public:
		Animal (void);
		Animal (std::string type);
		Animal (const Animal &copy);
		Animal &operator = (const Animal &copy);
		virtual ~Animal (void);

		virtual void makeSound(void) const = 0;

		std::string getType(void) const;

	protected:
		std::string _type;
};
#endif
