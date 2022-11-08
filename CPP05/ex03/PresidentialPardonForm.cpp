#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string target) :
    Form(target, 25, 5), target(target) {

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) :
    Form(copy), target(copy.target) {

}


PresidentialPardonForm::~PresidentialPardonForm() {}


PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &assign) {
    if(this != &assign) {
        this->Form::operator=(assign);
        this->target = assign.target;
    }
    return *this;
}

std::string PresidentialPardonForm::getTarget() const {
    return target;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
    if(!this->getStatus())
        throw Form::NotSignedException();
    if(executor.getGrade() > this->getExecuteGrade())
        throw Bureaucrat::GradeTooLowException();
    std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

