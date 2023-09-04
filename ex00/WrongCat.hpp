#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
	public:
		WrongCat (void);
		WrongCat (const WrongCat &original);
		WrongCat &operator = (const WrongCat &original);
		~WrongCat (void);

		void makeSound(void) const;

		std::string	getType( void ) const;

	protected:
		std::string _type;
};

#endif
