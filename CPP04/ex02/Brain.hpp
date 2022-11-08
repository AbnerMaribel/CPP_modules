#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain {
public:
    Brain();
    Brain(const Brain &copy);

    ~Brain();

    Brain & operator=(const Brain &assign);

private:
    std::string ideas[100];
};

#endif