#include "Header.h"

Shape::Shape(char* shapeName)
{
	name = shapeName;
}

char* Shape::getName()
{
	return name;
}

float Shape::getArea()
{
	return 0.0f;
}


float Shape::getVolume()
{
	return 0.0f;
}

Shape::Shape()
{

}

TwoDimensionalShape::TwoDimensionalShape()
{
	
}

TwoDimensionalShape::TwoDimensionalShape(char* shapeName)
{
	name=shapeName;
}

Circle::Circle(float r)
{
	name="Circle";
	radius = r;
}

float Circle::getArea()
{
	return 3.14159265f * radius * radius;
}

Square :: Square(float s) 
{
	name = "Square";
	side = s;
}

float Square::getArea() 
{
	return side * side;
}

ThreeDimensionalShape::ThreeDimensionalShape(char* shapeName)
{
	name = shapeName;
}
ThreeDimensionalShape::ThreeDimensionalShape()
{

}
Sphere::Sphere(float r)
{
	    name = "Sphere";
		radius = r;
}

float Sphere::getArea()
{
	return 4.0f * 3.14159265f * radius * radius;
	// f is written because of error that comes when double and float multiplies, so i made it float
}

float Sphere::getVolume() 
{
	return (4.0f / 3.0f) * 3.14159265f * radius * radius * radius;
}

Cube::Cube(float s)
{
	name = "Cube";
	side = s;
}

float Cube::getArea() 
{
	return 6.0f * side * side;
}

float Cube::getVolume() 
{
	return side * side * side;
}

