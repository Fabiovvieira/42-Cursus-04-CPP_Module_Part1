//
// Created by fvalli-v on 12-06-2023.
//

#ifndef SAMPLE_HPP
#define SAMPLE_HPP

#include <iostream>

class Sample {

public:
	Sample(void);								//Canonical - Default contructor
	Sample (int const n);
	Sample (Sample const &src);					//Canonical - Copy Constructor
	~Sample(void);								//Canonical - Destructor

	Sample	&operator=( Sample const &rhs);		//Canonical - Copy assignment operator

	int	getFoo (void) const;

private:
	int	_foo;

};

std::ostream	&operator<<(std::ostream &o, Sample const &i);


#endif //SAMPLE_HPP
