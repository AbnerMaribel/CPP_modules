#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name) {
    if(grade > 150)
        throw Bureaucrat::GradeTooLowException();
    if(grade < 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name(copy.name), grade(copy.grade) {}


Bureaucrat::~Bureaucrat() {}


Bureaucrat & Bureaucrat::operator=(const Bureaucrat &assign)
{
    if(this != &assign) {
        (std::string)this->name = assign.name;
        this->grade = assign.grade;
    }
	return *this;
}

std::string Bureaucrat::getName() {
    return name;
}

int Bureaucrat::getGrade() {
    return grade;
}

void Bureaucrat::incrementGrade() {
    if(grade == 1)
        throw Bureaucrat::GradeTooHighException();
    --grade;
}

void Bureaucrat::decrementGrade() {
    if(grade == 150)
        throw Bureaucrat::GradeTooLowException();
    ++grade;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Bureaucrat::GradeTooHighException";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Bureaucrat::GradeTooLowException";
}


std::ostream  & operator<<(std::ostream & outputStream, Bureaucrat & output) {
    outputStream << output.getName() << ", bureaucrat grade " << output.getGrade() << ".";
    return outputStream;
}





