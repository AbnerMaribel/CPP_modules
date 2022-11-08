#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    {
        std::cout << "---------------------------------" << std::endl;
        try {
            Form A1("A1", 10, 180);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }

        try {
            Form A2("A2", 0, 120);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
    {
        std::cout << "---------------------------------" << std::endl;
        Bureaucrat B("B", 20);
        Bureaucrat C("C", 2);
        Form E2("E2", 10, 15);
        std::cout << E2 << std::endl;
        B.signForm(E2);
        C.signForm(E2);
        std::cout << E2 << std::endl;
    }
    {
        std::cout << "---------------------------------" << std::endl;
        try {
            Bureaucrat P("P", 30);
            Form T5("T5", 20, 10);
            T5.beSigned(P);
        } catch (std::exception & e) {
            std::cout << e.what() << std::endl;
        }
    }
    return 0;
}