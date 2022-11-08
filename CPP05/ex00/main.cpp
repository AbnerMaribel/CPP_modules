#include "Bureaucrat.hpp"

int main() {
    Bureaucrat one = Bureaucrat("Tom", 1);
    Bureaucrat two = Bureaucrat("Sam", 150);
    std::cout << one << std::endl;
    std::cout << two << std::endl;

    try {
        Bureaucrat three = Bureaucrat("Mike", 0);
    } catch (std::exception & e) {

        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat four = Bureaucrat("John", 160);
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    try {
        one.incrementGrade();
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    try {
        two.decrementGrade();
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}