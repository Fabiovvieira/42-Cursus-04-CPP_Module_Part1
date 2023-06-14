//
// Created by fvalli-v on 14-06-2023.
//

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <iostream>


class Point {

public:
	Point(void);								//Canonical - Default contructor
	Point(float const x, float const y);
	Point (Point const &src);					//Canonical - Copy Constructor
	~Point(void);								//Canonical - Destructor

	Point	&operator=( Point const &rhs);		//Canonical - Copy assignment operator

	Fixed	getX( void ) const;
	Fixed	getY( void ) const;

private:
	Fixed	_x;
	Fixed	_y;

};


#endif //POINT_HPP
