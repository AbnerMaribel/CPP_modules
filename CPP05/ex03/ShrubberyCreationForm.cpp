#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
    Form(target, 145, 137), target(target) {

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) :
    Form(copy), target(copy.target) {
}


ShrubberyCreationForm::~ShrubberyCreationForm() {}


ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign) {
    if(this != &assign) {
        this->Form::operator=(assign);
        this->target = assign.target;
    }
    return *this;
}

std::string ShrubberyCreationForm::getTarget() const {
    return target;
}

const char *ShrubberyCreationForm::FileNotOpened::what() const throw() {
    return "ShrubberyCreationForm::FileNotOpened";
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
    std::ofstream outputStream;
    if(!this->getStatus())
        throw Form::NotSignedException();
    if(executor.getGrade() > this->getExecuteGrade())
        throw Bureaucrat::GradeTooLowException();
    outputStream.open(this->target + "_shrubbery");
    if(!outputStream.is_open())
        throw ShrubberyCreationForm::FileNotOpened();
    else
        outputStream << "    oxoxoo    ooxoo" << std::endl
                     << "  ooxoxo oo  oxoxooo" << std::endl
                     << " oooo xxoxoo ooo ooox" << std::endl
                     << " oxo o oxoxo  xoxxoxo" << std::endl
                     << "  oxo xooxoooo o ooo" << std::endl
                     << "    ooo\\oo\\  /o/o" << std::endl
                     << "        \\  \\/ /" << std::endl
                     << "         |   /" << std::endl
                     << "         |  |" << std::endl
                     << "         | D|" << std::endl
                     << "         |  |" << std::endl
                     << "         |  |" << std::endl
                     << "  ______/____\\____" << std::endl;
        outputStream.close();
}



