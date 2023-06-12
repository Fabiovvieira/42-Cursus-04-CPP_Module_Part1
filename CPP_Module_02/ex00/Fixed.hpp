//
// Created by fvalli-v on 12-06-2023.
//

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {

public:
	Fixed(void);								//Canonical - Default contructor
	Fixed (Fixed const &src);					//Canonical - Copy Constructor
	~Fixed(void);								//Canonical - Destructor

	Fixed	&operator=( Fixed const &rhs);		//Canonical - Copy assignment operator

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

private:
	int		_fixed;
	static int const	_numFracBits = 8;

};

#endif //FIXED_HPP
