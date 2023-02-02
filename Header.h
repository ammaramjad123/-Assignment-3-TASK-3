#include <iostream>
using namespace std;

class Shape {
protected:
	char* name;
public:
	Shape(char* shapeName);
	char* getName();
	virtual float getArea();
	virtual float getVolume();
	Shape();
};

class TwoDimensionalShape : public Shape {
public:
	TwoDimensionalShape();
	TwoDimensionalShape(char* shapeName);
};

class Circle : public TwoDimensionalShape {
protected:
	float radius;

public:
	Circle(float r);
	float getArea();
};

class Square : public TwoDimensionalShape {
protected:
	float side;
public:
	Square(float s);

	float getArea();
};

class ThreeDimensionalShape : public Shape {
public:
	ThreeDimensionalShape();
	ThreeDimensionalShape(char* shapeName);
};

class Sphere : public ThreeDimensionalShape {
protected:
	float radius;
public:
	Sphere(float r);
	float getArea();
	float getVolume();
};

class Cube : public ThreeDimensionalShape {
protected:
	float side;

public:
	Cube(float s);
	float getArea();
	float getVolume();
};