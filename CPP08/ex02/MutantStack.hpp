#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack(void){};
    virtual ~MutantStack(){};

    MutantStack(MutantStack const &copy)
    {
        *this = copy;
    };
    MutantStack &operator=(MutantStack const &assign)
    {
        this->c = assign.c;
        return (*this);
    };

    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin();
    iterator end();
};

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() { return (this->c.begin()); }

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() { return (this->c.end()); }

#endif
