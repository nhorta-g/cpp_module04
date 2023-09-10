/*
Shallow Copy and deep copy:

In shallow copy, an object is created by simply copying the data of all
variables of the original object. This works well if none of the variables
of the object are defined in the heap section of memory. If some variables
are dynamically alloDoged memory from heap section, then the copied object
variable will also reference the same memory loDogion.
This will create ambiguity and run-time errors, dangling pointer. Since both
objects will reference to the same memory loDogion, then change made by one
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

# include "Dog.hpp"

//////////////////CONSTRUCTORS//////////////////

Dog::Dog(void) : Animal("Dog"), _dogBrain(new Brain) {
	std::cout << "Dog Default constructor called.\n" << std::endl;
	_type = "Dog";
}

Dog::Dog(const Dog &copy) : Animal(), _dogBrain(new Brain) {
	std::cout << "Dog copy constructor called.\n" << std::endl;
	(*this) = copy;
}

Dog& Dog::operator = (const Dog &copy) {
	std::cout << "Dog assigment operator called.\n" << std::endl;
	if (this != &copy) {
		this->_type = copy.getType();
		delete this->_dogBrain;
		_dogBrain = new Brain(*(copy._dogBrain));
	}
	return (*this);
}

Dog::~Dog(void) {
	delete _dogBrain;
	std::cout << "Dog Default destructor called.\n" << std::endl;
}

////////////SUBJECT MEMBER FUNCTIONS////////////

void Dog::makeSound(void) const{
	std::cout << "WOF WOF WOF!";
}

////////////GETTERS AND SETTERS///////////

void Dog::setIdea(std::string idea) {
    this->_dogBrain->setIdea(idea);
}

void Dog::showIdea(void) const{
    this->_dogBrain->showIdea();
}
