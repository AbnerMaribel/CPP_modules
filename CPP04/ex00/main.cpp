#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    {
        const Animal *meta = new Animal();
        std::cout << "----------------" << std::endl;
        const Animal *j = new Dog();
        std::cout << "----------------" << std::endl;
        const Animal *i = new Cat();
        std::cout << "----------------" << std::endl;
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound();
        j->makeSound();
        meta->makeSound();
        std::cout << "----------------" << std::endl;
        delete meta;
        delete j;
        delete i;
    }
    {
        std::cout << "----------------" << std::endl;
        std::cout << "----------------" << std::endl;
        const WrongAnimal *i = new WrongCat();
        std::cout << "----------------" << std::endl;
        i->makeSound();
        std::cout << "----------------" << std::endl;
        delete i;
    }
    return 0;
}
