#include "Form.hpp"

Form::Form(const std::string &name, int signGrade, int executeGrade) :
    name(name), isSigned(false), signGrade(signGrade), executeGrade(executeGrade) {
    if(signGrade > 150 || executeGrade > 150)
        throw Form::GradeTooLowException();
    if(signGrade < 1 || executeGrade < 1)
        throw Form::GradeTooHighException();
}

Form::Form(const Form &copy) : name(copy.name), isSigned(copy.isSigned),
    signGrade(copy.signGrade), executeGrade(copy.executeGrade) {}

Form::~Form() {}

Form &Form::operator=(const Form &assign) {
    if(this != &assign) {
        (std::string)this->name = assign.name;
        this->isSigned = assign.isSigned;
    }
    return *this;
}

std::string Form::getName() {
    return name;
}

bool Form::getStatus() {
    return isSigned;
}

int Form::getSignGrade() {
    return signGrade;
}

int Form::getExecuteGrade() {
    return executeGrade;
}

const char *Form::GradeTooHighException::what() const throw() {
    return "Form::GradeTooHighException";
}

const char *Form::GradeTooLowException::what() const throw() {
    return "Form::GradeTooLowException";
}

void Form::beSigned(Bureaucrat &b) {
    if(this->isSigned == true) {
        std::cout << this->name << " already signed!" << std::endl;
        return;
    }
    if(b.getGrade() <= this->signGrade)
        this->isSigned = true;
    else
        throw Form::GradeTooLowException();
}

std::ostream  & operator<<(std::ostream & outputStream, Form & output) {
    outputStream << "Form name: " << output.getName()
                    << ", form status: " << (output.getStatus() ? "signed" : "not signed")
                        << ", sign grade: " << output.getSignGrade()
                            << ", execute grade: " << output.getExecuteGrade();
    return outputStream;
}