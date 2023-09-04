#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain {
	public:
		Brain (void);
		Brain (std::string type);
		Brain (const Brain &original);
		Brain &operator = (const Brain &original);
		~Brain (void);

	protected:
		std::string _ideas[100];
};
#endif
