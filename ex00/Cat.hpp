#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat (void);
		Cat (const Cat &original);
		Cat &operator = (const Cat &original);
		~Cat (void);
	protected:
		std::string type;
};

#endif
