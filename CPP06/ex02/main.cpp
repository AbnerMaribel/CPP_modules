#include "Base.hpp"

int main() {
    Base* base = generate();

    identify(base);
    identify(*base);
    identify(NULL);

    delete base;

    return 0;
}
