#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>


class Fixed {
private:
    int rawValue;                      
    static const int fractionalBits = 8; 
public:
    Fixed();                            
    Fixed(const int integerValue);     
    Fixed(const float floatValue);     
    Fixed(const Fixed &source);        
    ~Fixed();                          
    Fixed &operator=(const Fixed &source); 
    int getRawBits() const;           
    void setRawBits(int const newRawValue); 
    float toFloat() const;              
    int toInt() const;                  
};
std::ostream &operator<<(std::ostream &output, const Fixed &fixed);

#endif

