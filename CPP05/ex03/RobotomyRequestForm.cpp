#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
        Form(target, 72, 45), target(target) {

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) :
        Form(copy), target(copy.target) {
}


RobotomyRequestForm::~RobotomyRequestForm() {}


RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &assign) {
    if(this != &assign) {
        this->Form::operator=(assign);
        this->target = assign.target;
    }
    return *this;
}

std::string RobotomyRequestForm::getTarget() const {
    return target;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
    srand(time(NULL));
    if(!this->getStatus())
        throw Form::NotSignedException();
    if(executor.getGrade() > this->getExecuteGrade())
        throw Bureaucrat::GradeTooLowException();
    std::cout << "Drrrrrrrr" << std::endl;
    int a = rand() % 100;
    if(a < 50)
       std::cout << target << " has been robotomized successfully" << std::endl;
    else
        std::cout << "Robotomy failed" << std::endl;
}

