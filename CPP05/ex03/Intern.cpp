#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &copy) {
    *this = copy;
}

Intern::~Intern() {}

Intern &Intern::operator=(const Intern &assign) {
    (void)assign;
    return *this;
}

Form *Intern::makeForm(std::string formName, std::string formTarget) {

    Form *res = NULL;

    std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

    int index;

    for(index = 0; index < 3 && forms[index] != formName; index++);

    switch (index) {
        case 0: {
            res = new ShrubberyCreationForm(formTarget);
            std::cout << "Intern creates " << res->getName() << std::endl;
            return res;
        }
        case 1: {
            res = new RobotomyRequestForm(formTarget);
            std::cout << "Intern creates " << res->getName() << std::endl;
            return res;
        }
        case 2: {
            res = new PresidentialPardonForm(formTarget);
            std::cout << "Intern creates " << res->getName() << std::endl;
            return res;
        }
        default:
            throw (FormDoesNotExistException());
    }

}

const char *Intern::FormDoesNotExistException::what() const throw() {
    return "Intern::FormDoesntExistException";
}