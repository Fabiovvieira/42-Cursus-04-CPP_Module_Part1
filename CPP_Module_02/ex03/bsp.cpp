//
// Created by fvalli-v on 14-06-2023.
//

#include "Fixed.hpp"
#include "Point.hpp"
#include <vector>


// Structure to represent a line equation in general form (Ax + By + C)
// where A, B and C are the coefficient
struct coefficient {
	Fixed A;
	Fixed B;
	Fixed C;
};

// Function to calculate the equation of a line from two points
coefficient createLine(Point p1, Point p2) {
	coefficient line;
	line.A = p2.getY() - p1.getY();
	line.B = p1.getX() - p2.getX();
	line.C = p2.getX() * p1.getY() - p1.getX() * p2.getY();
	return line;
}

// Function to check if a point is inside, outside, or on the boundary of a triangle
bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	// Calculate the line equations of the triangle's edges
	coefficient edge1 = createLine(a, b);
	coefficient edge2 = createLine(b, c);
	coefficient edge3 = createLine(c, a);

	// Calculate the values by substituting the point into each line equation
	Fixed value1 = edge1.A * point.getX() + edge1.B * point.getY() + edge1.C;
	Fixed value2 = edge2.A * point.getX() + edge2.B * point.getY() + edge2.C;
	Fixed value3 = edge3.A * point.getX() + edge3.B * point.getY() + edge3.C;

	// Check the signs of the values to determine the point's position
	if (value1 == 0 || value2 == 0 || value3 == 0) {
		return false; // Point lies on one of the triangle's edges
	} else if ((value1 > 0 && value2 > 0 && value3 > 0) || (value1 < 0 && value2 < 0 && value3 < 0)) {
		return true; // Point is inside the triangle
	} else {
		return false; // Point is outside the triangle
	}
}