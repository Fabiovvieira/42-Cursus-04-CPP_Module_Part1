//
// Created by fvalli-v on 14-06-2023.
//
#include "Point.hpp"

Point::Point(void) : _x(Fixed(0)) , _y(Fixed(0)) {
//	std::cout << "Default constructor called" << std::endl;
	return ;
}

Point::Point(float const x, float const y) : _x(Fixed(x)) , _y(Fixed(y)) {
//	std::cout << "Default constructor called" << std::endl;
	return ;
}

Point::Point(Point const &src){
//	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Point::~Point(void) {
//	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed	Point::getX( void ) const{
//	std::cout << "getRawBits member function called" << std::endl;
	return (this->_x);
}

Fixed	Point::getY( void ) const{
//	std::cout << "getRawBits member function called" << std::endl;
	return (this->_y);
}

Point	&Point::operator=(const Point &rhs) {
//	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_x = rhs.getX();
		this->_y = rhs.getY();
	}
	return *this;
}
