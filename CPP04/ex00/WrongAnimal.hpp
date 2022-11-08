#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &copy);

    virtual ~WrongAnimal();

    WrongAnimal & operator=(const WrongAnimal &assign);

    void makeSound() const;

protected:
    std::string type;
};

#endif
