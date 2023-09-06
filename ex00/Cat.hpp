#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal {
	public:
		Cat (void);
		Cat (const Cat &copy);
		Cat &operator = (const Cat &copy);
		~Cat (void);

		void makeSound(void) const;

		virtual std::string	getType( void ) const;

	protected:
		std::string _type;
};

#endif
