/*
Shallow Copy and deep copy:

In shallow copy, an object is created by simply copying the data of all
variables of the original object. This works well if none of the variables
of the object are defined in the heap section of memory. If some variables
are dynamically allocated memory from heap section, then the copied object
variable will also reference the same memory location.
This will create ambiguity and run-time errors, dangling pointer. Since both
objects will reference to the same memory location, then change made by one
will reflect those change in another object as well. Since we wanted to
create a replica of the object, this purpose will not be filled by Shallow copy.

eg: Parameterized Constructors for implementing deep copy:

box(box& sample) {
	length = sample.length;
	breadth = new int;
	*breadth = *(sample.breadth);
	height = sample.height;
}
Source: www.geeksforgeeks.org
*/

# include "Cat.hpp"

//////////////////CONSTRUCTORS//////////////////

Cat::Cat(void) : Animal("Cat"), _catBrain(new Brain) {
	std::cout << "Cat Default constructor called.\n" << std::endl;
	_type = "cat";
}

Cat::Cat(const Cat &copy) : Animal(), _catBrain(new Brain) {
	std::cout << "Cat copy constructor called.\n" << std::endl;
	(*this) = copy;
}

Cat& Cat::operator = (const Cat &copy) {
	std::cout << "Cat assigment operator called.\n" << std::endl;
	if (this != &copy) {
		_type = copy.getType();
		_catBrain = new Brain(*(copy._catBrain));
	}
	return (*this);
}

Cat::~Cat(void) {
	delete _catBrain;
	std::cout << "Cat Default destructor called...\n" << std::endl;
}

////////////SUBJECT MEMBER FUNCTIONS////////////

void Cat::makeSound(void) const {
	std::cout << "MIIIAAAAAAAUUUU!" << std::endl;
}

////////////GETTERS AND SETTERS///////////

void Cat::setIdea(std::string idea) {
    this->_catBrain->setIdea(idea);
}

void Cat::showIdea(int index) const {
    this->_catBrain->showIdea(index);
}
