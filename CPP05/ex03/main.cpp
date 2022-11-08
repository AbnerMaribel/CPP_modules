#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main() {
    Intern  someRandomIntern;
    Form* rrf;
    Form* rrf1;
    Form* rrf2;

    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    std::cout << *rrf << std::endl;
    rrf1 = someRandomIntern.makeForm("shrubbery creation", "Bender1");
    std::cout << *rrf1 << std::endl;
    rrf2 = someRandomIntern.makeForm("robotomy request", "Bender2");
    std::cout << *rrf2 << std::endl;

    delete rrf;
    delete rrf1;
    delete rrf2;

    return 0;
}