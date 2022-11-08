#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
public:
    Fixed(void);
    Fixed(const Fixed &copy);
    Fixed(const int iNum);
    Fixed(const float fNum);

    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;

    Fixed & operator=(const Fixed &assign);

    bool operator>(const Fixed & other) const;
    bool operator<(const Fixed & other) const;
    bool operator>=(const Fixed & other) const;
    bool operator<=(const Fixed & other) const;
    bool operator==(const Fixed & other) const;
    bool operator!=(const Fixed & other) const;

    const Fixed operator+(const Fixed & other) const;
    const Fixed operator-(const Fixed & other) const;
    const Fixed operator*(const Fixed & other) const;
    const Fixed operator/(const Fixed & other) const;

    Fixed & operator++(void);
    const Fixed operator++(int);
    Fixed & operator--(void);
    const Fixed operator--(int);

    static Fixed & min(Fixed & x, Fixed & y);
    static const Fixed & min(const Fixed & x, const Fixed & y);
    static Fixed & max(Fixed & x, Fixed & y);
    static const Fixed & max(const Fixed & x, const Fixed & y);

private:
    int value;
    static const int fractionalBits = 8;

};

std::ostream  & operator<<(std::ostream &output, const Fixed &n);

#endif

