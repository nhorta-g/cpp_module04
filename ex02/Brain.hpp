#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "Animal.hpp"
# include "Brain.hpp"

# define SIZE_IDEAS 100
class Brain {
	public:
		Brain (void);
		Brain (const Brain &copy);
		Brain &operator = (const Brain &copy);
		~Brain (void);

		void read(void);

		void showIdea(void);
		void setIdea(std::string idea);

	protected:
		std::string _ideas[SIZE_IDEAS];
};
#endif
