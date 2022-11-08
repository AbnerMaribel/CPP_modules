#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
    Form *A1 = new PresidentialPardonForm("M");
    Form *B1 = new RobotomyRequestForm("N");
    Form *C1 = new ShrubberyCreationForm("O");

    std::cout << *A1 << std::endl;
    std::cout << *B1 << std::endl;
    std::cout << *C1 << std::endl;

    Bureaucrat Mike("Mike", 6);
    std::cout << Mike << std::endl;

    Mike.executeForm(*A1);

    Mike.signForm(*A1);
    Mike.signForm(*B1);
    Mike.signForm(*C1);

    Mike.executeForm(*A1);

    Mike.incrementGrade();
    std::cout << Mike << std::endl;

    Mike.executeForm(*A1);
    Mike.executeForm(*B1);
    Mike.executeForm(*C1);

    delete A1;
    delete B1;
    delete C1;

    return 0;
}