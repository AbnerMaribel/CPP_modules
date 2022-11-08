#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


class Intern {
public:
    Intern();
    Intern(const Intern &copy);

    ~Intern();

    Intern & operator=(const Intern & assign);

    Form *makeForm(std::string formName, std::string formTarget);

    class FormDoesNotExistException : public std::exception {
    public:
        const char * what() const throw();
    };

private:

};


#endif
