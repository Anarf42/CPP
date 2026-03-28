#include "Fixed.hpp"

int main( void ) 
{
    Fixed a;
    Fixed c(15);
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    

    std::cout << "----- VALUE OF A -----" << a << std::endl;
    std::cout << "----- VALUE OF B -----" << b << std::endl;
    std::cout << "----- VALUE OF c -----" << c << std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;

    std::cout << "----- SUM -----" << std::endl;
    std::cout << (a+b) << std::endl;
    std::cout << "----- REST -----" << std::endl;
    std::cout << (a-b) << std::endl;
    std::cout << "----- MULTIPLICATION -----" << std::endl;
    std::cout << (b*c) << std::endl;
    std::cout << "----- DIVISION -----" << std::endl;
    std::cout << (b/c) << std::endl;
    std::cout << "----- GREATTER THAN> -----" << std::endl;
    std::cout << (b>c) << std::endl;
    std::cout << "----- LESS THAN< -----" << std::endl;
    std::cout << (b<c) << std::endl;
    std::cout << "----- GREATER THAN OR EQUAL TO >= -----" << std::endl;
    std::cout << (b>=c) << std::endl;
    std::cout << "----- LESS THAN OR EQUAL TO <= -----" << std::endl;
    std::cout << (b<=c) << std::endl;
    std::cout << "----- SAME  -----" << std::endl;
    std::cout << (a==b) << std::endl;
    std::cout << "----- DIFFERENT -----" << std::endl;
    std::cout << (a!=b) << std::endl;

    std::cout<<std::endl;
    std::cout<<std::endl;

    std::cout << "----- PRE-INCREMENT ----- " << std::endl;
    std::cout << "PRE-INCREMENT of a " << ++a << std::endl;
    std::cout << "PRE-INCREMENT of c " << ++c << std::endl;
    std::cout << "----- POST-INCREMENT -----" << std::endl;
    std::cout << "POST-INCREMENT of a " << a++ << std::endl;
    std::cout << "POST-INCREMENT of c " << c++ << std::endl;
    std::cout << "----- PRE-DECREMENT -----" << std::endl;
    std::cout << "PRE-DECREMENT of a " << --a << std::endl;
    std::cout << "PRE-DECREMENT of c " << --c << std::endl;
    std::cout << "----- POST-DECREMENT -----" << std::endl;
    std::cout << "POST-DECREMENT of a " << a-- << std::endl;
    std::cout << "POST-DECREMENT of c " << c-- << std::endl;

    std::cout<<std::endl;
    std::cout<<std::endl;

    std::cout << "MAX AND MIN CONST" << std::endl;
    const Fixed d(30);
	const Fixed e(40);
    std::cout << "----- VALUE OF D -----" << d << std::endl;
    std::cout << "----- VALUE OF E -----" << e << std::endl;
	std::cout << "max const: " << Fixed::max(d, e) << std::endl;
	std::cout << "min const: " << Fixed::min(d, e) << std::endl;

    std::cout << "MAX AND MIN WITHOUT CONST" << std::endl;
    Fixed f(10);
	Fixed g(20);
    std::cout << "----- VALUE OF F -----" << f << std::endl;
    std::cout << "----- VALUE OF G -----" << g << std::endl;
	std::cout << "max: " << Fixed::max(f, g) << std::endl;
	std::cout << "min: " << Fixed::min(f, g) << std::endl;

    return 0;
}