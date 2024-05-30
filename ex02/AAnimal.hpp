#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <string>
# include <iostream>

#define RED "\033[1m\033[31m"
#define YELLOW "\033[33m"
#define GREEN "\033[1;32m"
#define BLUE "\033[0;34m"
#define MAGENTA "\033[0;35m"
#define CYAN "\033[0;36m"
#define RESET "\033[0m"
class AAnimal {
	public:
		AAnimal (void);
		AAnimal (const AAnimal &copy);
		AAnimal &operator = (const AAnimal &copy);
		virtual ~AAnimal (void);

		virtual void makeSound(void) const = 0;

		std::string getType(void) const;

	protected:
		std::string _type;
};
#endif
