#include "Span.hpp"

Span::Span(void) : _size(0) {}

Span::Span(unsigned int size) : _size(size) {}

Span::Span(Span const &copy)
{
    *this = copy;
}

Span &Span::operator=(Span const &assign)
{
    if (this != &assign)
    {
        _size = assign._size;
        _vector = assign._vector;
    }
    return (*this);
}

Span::~Span(void) {}

void Span::addNumber(int num)
{
    if (_vector.size() == _size)
        throw NoPlace();
    _vector.push_back(num);
}

void Span::addNumbers(std::vector<int> vector) {
    _vector.insert(_vector.end(), vector.begin(), vector.end());
}

//void Span::addNumbers(int *numbers, unsigned int size1)
//{
//    if (_vector.size() == _size || _vector.size() + size1 > _size)
//        throw NoPlace();
//    _vector.insert(_vector.end(), numbers, numbers+10000);
//}

int Span::shortestSpan() {
    if (_size < 2)
        throw NoSpanFound();
    std::vector<int> temp = _vector;
    std::sort(temp.begin(), temp.end());
    int minSpan = *std::max_element(temp.begin(), temp.end());
    std::vector<int>::iterator prev;
    std::vector<int>::iterator cur = temp.begin() ;
    while (true) {
        prev = cur;
        cur++;
        if (cur == temp.end())
            break;
        if ((*cur - *prev) < minSpan)
            minSpan = *cur - *prev;
    }
    return minSpan;
}

int Span::longestSpan() {
    if (_size > 1)
    {
        int max = *std::max_element(_vector.begin(), _vector.end());
        int min = *std::min_element(_vector.begin(), _vector.end());
        return (max - min);
    }
    else
        throw NoSpanFound();
}

void Span::print() {
    for (unsigned long i = 0; i < _vector.size(); ++i)
        std::cout << _vector[i] << ' ';
    std::cout << std::endl;
}







