#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Brain {
	public:
		Brain (void);
		Brain (const Brain &copy);
		Brain &operator = (const Brain &copy);
		~Brain (void);

	std::string getIdeas(int index);

	void	setIdeas(std::string idea);

	protected:
		std::string _ideas[100];
};
#endif
