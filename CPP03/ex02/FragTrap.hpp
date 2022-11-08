#ifndef CPP_FRAGTRAP_HPP
#define CPP_FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &copy);

    ~FragTrap();

    FragTrap & operator=(const FragTrap &assign);

    void highFivesGuys(void);

};


#endif
