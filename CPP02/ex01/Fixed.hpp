#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
public:
    Fixed(void);
    Fixed(const Fixed &copy);
    Fixed(const int iNum);
    Fixed(const float fNum);


    ~Fixed();

    Fixed & operator=(const Fixed &assign);

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;

private:
    int value;
    static const int fractionalBits = 8;

};

std::ostream  & operator<<(std::ostream &output, const Fixed &n);

#endif

