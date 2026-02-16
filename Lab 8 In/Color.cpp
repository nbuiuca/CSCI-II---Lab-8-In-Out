//Nhan Bui
// Lab 8 in
#include <iostream>
#include "graph1.h"
#include "Color.h"

Color::Color()
{
	r = 0;
	g = 0;
	b = 0;

}
Color::Color(int r, int g, int b)
{
	this-> r=r;
	this->g = g;
	this->b = b;
}
void Color::setColor(int r, int g, int b)
{
	this->r = r;
	this->g = g;
	this->b = b;


}
int Color::getRed()
{
	return r;
}
int Color::getGreen()
{
	return g;

}
int Color::getBlue()
{
	return b;
}
Color Color::operator+(Color right)
{
	Color result;
	result.r = r + right.getRed();
	result.g = g + right.getGreen();
	result.b = b + right.getBlue();
	if (result.r > 255) {
		result.r = 255;
	}
	if (result.g > 255) {
		result.g = 255;
	}
	if (result.b > 255) {
		result.b = 255;
	}
	return result;
}
Color Color::operator-(Color right)
{
	Color result;
	result.r = r - right.getRed();
	result.g = g - right.getGreen();
	result.b = b - right.getBlue();
	if (result.r < 0) {
		result.r = 0;
	}
	if (result.g < 0) {
		result.g = 0;
	}
	if (result.b < 0) {
		result.b = 0;
	}
	return result;
}
Color Color::operator/(int right)
{
	Color result;
	result.r = r / right;
	result.g = g / right;
	result.b = b / right;

	return result;
}
Color Color::operator*(int right)
{
	Color result;
	result.r = r * right;
	result.g = g * right;
	result.b = b * right;

	return result;
}
bool Color::operator==(Color right)
{
	bool result = false;
	if (r != right.r) {
		return result;
	}
	else if (g != right.g) {
		return result;
	}
	else if (b != right.b) {
		return result;
	}
	else {
		result = true;
		return result;
	}

}
bool Color::operator!=(Color right)
{
	bool result = true;
	if (r != right.r) {
		return result;
	}
	else if (g != right.g) {
		return result;
	}
	else if (b != right.b) {
		return result;
	}
	else {
		result = false;
		return result;
	}
}
void Color::operator=(Color right)
{
	this->r = right.r;
	this->g = right.g;
	this->b = right.b;


}
Color Color::operator!()
{
	Color result;
	result.r = 255 - r;
	result.g = 255 - g;
	result.b = 255 - b;
	return result;

}
void Color::draw(int x, int y, int w, int h)
{
	int obj_no = drawRect(x, y, w, h);
	::setColor(obj_no, r, g, b);
}
