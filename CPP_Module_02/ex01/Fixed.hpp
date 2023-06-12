//
// Created by fvalli-v on 12-06-2023.
//

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {

public:
	Fixed(void);								//Canonical - Default constructor
	Fixed(int const num);
	Fixed(float const num);
	Fixed (Fixed const &src);					//Canonical - Copy Constructor
	~Fixed(void);								//Canonical - Destructor

	Fixed	&operator=( Fixed const &rhs);		//Canonical - Copy assignment operator

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;


private:
	int		_fixed;
	static int const	_numFracBits = 8;

};

std::ostream	&operator<<(std::ostream &o, Fixed const &i);

#endif //FIXED_HPP
