//
// Created by fvalli-v on 12-06-2023.
//

#include <iostream>
#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point);

int	main( void ) {
	{
		//on vertice
		Point const a(-1.0f, -1.0f);
		Point const b(5.0f, 5.0f);
		Point const c(0.0f, 10.0f);
		Point const d(0.0f, 10.0f);

		if (bsp(a, b, c, d))
			std::cout << "The point is inside the triangle" << std::endl;
		else
			std::cout << "The point is outside the triangle" << std::endl;
	}
	{
		//on edge
		Point const a(0.0f, 10.0f);
		Point const b(10.0f, 0.0f);
		Point const c(0.0f, 0.0f);
		Point const d(5.0f, 0.0f);

		if (bsp(a, b, c, d))
			std::cout << "The point is inside the triangle" << std::endl;
		else
			std::cout << "The point is outside the triangle" << std::endl;
	}
	{
		//on edge
		Point const a(0.0f, 10.0f);
		Point const b(10.0f, 0.0f);
		Point const c(0.0f, 0.0f);
		Point const d(2.0f, 2.0f);

		if (bsp(a, b, c, d))
			std::cout << "The point is inside the triangle" << std::endl;
		else
			std::cout << "The point is outside the triangle" << std::endl;
	}
	{
		//on edge
		Point const a(0.0f, 10.0f);
		Point const b(10.0f, 0.0f);
		Point const c(0.0f, 0.0f);
		Point const d(10.0f, 10.0f);

		if (bsp(a, b, c, d))
			std::cout << "The point is inside the triangle" << std::endl;
		else
			std::cout << "The point is outside the triangle" << std::endl;
	}
	return (0);
}