#include "triangle.h"
#include <exception>


Triangle::Triangle(float base, float height) : _base(base), _height(height)
{
}

float Triangle::get_area() const // removed has_depth parameter because get_area of shape and get_area of triangle didn't have the same title
{

	return float(0.5 * _base * _height);
}
