#include "Base.hpp"

Base::~Base() {}

Base* generate(void) {
    srand(time(NULL));
    int a = rand() % 3;
    if(a == 0)
        return new A();
    else if(a == 1)
        return new B();
    else
        return new C();
}

void identify(Base* p) {
    if(dynamic_cast<A*>(p))
        std::cout << "A class object" << std::endl;
    else if(dynamic_cast<B*>(p))
        std::cout << "B class object" << std::endl;
    else if(dynamic_cast<C*>(p))
        std::cout << "C class object" << std::endl;
}

void identify(Base& p) {
    try {
        A object = dynamic_cast<A&>(p);
        std::cout << "A class object" << std::endl;
    } catch (std::exception& ex) {
        try {
            B object = dynamic_cast<B&>(p);
            std::cout << "B class object" << std::endl;
        } catch (std::exception& ex) {
            std::cout << "C class object" << std::endl;
        }
    }
}