#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("EmptyName"), grade(150)
{
}

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

void Bureaucrat::signForm(Form & f) {
    try {
        f.beSigned(*this);
        std::cout << name << " signed " << f.getName() << std::endl;
    } catch (std::exception & e) {
        std::cout << name << " couldn't sign " << f.getName() << " because " << e.what()
            << std::endl;
    }
}

std::ostream  & operator<<(std::ostream & outputStream, Bureaucrat & output) {
    outputStream << output.getName() << ", bureaucrat grade " << output.getGrade() << ".";
    return outputStream;
}





