#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain: Default Constructor called" << std::endl;
    for(int i = 0; i < 100; i++)
        ideas[i] = "Idea";
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Brain: Copy Constructor called" << std::endl;
    for(int i = 0; i < 100; i++)
        this->ideas[i] = copy.ideas[i];
}

Brain::~Brain()
{
    std::cout << "Brain: Destructor called" << std::endl;
}


Brain & Brain::operator=(const Brain &assign)
{
    std::cout << "Brain: Copy assignment operator called" << std::endl;
    if(this != &assign) {
        for(int i = 0; i < 100; i++)
            this->ideas[i] = assign.ideas[i];
    }
    return *this;
}
