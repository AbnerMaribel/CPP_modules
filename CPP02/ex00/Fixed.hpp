#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed {
public:
    Fixed(void);
    Fixed(const Fixed &copy);

    ~Fixed();

    Fixed & operator=(const Fixed &assign);

    int getRawBits(void) const;
    void setRawBits(int const raw);

private:
    int value;
    static const int fractionalBits = 8;

};

#endif
