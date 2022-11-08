#include "easyfind.hpp"

int main() {
    std::cout << "---------VECTOR-------------" << std::endl;
    std::vector<int> intVector;

    for (int i = 1; i <= 5; ++i) {
        intVector.push_back(i);
    }

    print(intVector);

    try{
        easyfind(intVector, 4);
        easyfind(intVector, 0);
    } catch (std::exception & ex) {
        std::cout << ex.what() << std::endl;
    }

    std::cout << "---------LIST-------------" << std::endl;

    std::list<int> list;
    for (int i = 1; i <= 5; ++i) {
        list.push_back(i*10);
    }

    print(list);

    try{
        easyfind(list, 10);
        easyfind(intVector, -5);
    } catch (std::exception & ex) {
        std::cout << ex.what() << std::endl;
    }

    std::cout << "---------SET-------------" << std::endl;

    std::set<int> set;

    set.insert(5);
    set.insert(2);
    set.insert(10);
    set.insert(5);
    set.insert(-15);

    print(set);

    try{
        easyfind(set, 5);
        easyfind(set, -5);
    } catch (std::exception & ex) {
        std::cout << ex.what() << std::endl;
    }


    return 0;
}
