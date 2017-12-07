#include "utils.h"

// Vec2 struct
Vec2::Vec2(float argX /*=0.0f*/, float argY /*=0.0f*/)
: x(argX), y(argY) {}
Vec2 Vec2::operator+(Vec2 argOther)
{
	return Vec2(this->x + argOther.x, this->y + argOther.y);
}
void Vec2::operator+=(Vec2 argOther)
{
	this->x += argOther.x;
	this->y += argOther.y;
}
Vec2 Vec2::operator-(Vec2 argOther)
{
	return Vec2(this->x - argOther.x, this->y - argOther.y);
}
Vec2 Vec2::operator*(float argMultiplier)
{
	return Vec2(argMultiplier * this->x, argMultiplier * this->y);
}
Vec2 Vec2::operator/(float argDivisor)
{
	return Vec2(this->x / argDivisor, this->y / argDivisor);
}

// Transport struct
Transport::Transport(Vec2 argPosn, float argRotn)
: posn(argPosn), rotn(argRotn) {}

// Rectangle struct
Rectangle::Rectangle(Vec2 argP0, Vec2 argP1, Vec2 argP2, Vec2 argP3)
: p0(argP0), p1(argP1), p2(argP2), p3(argP3) {}

// ColorRGBA struct
ColorRGBA::ColorRGBA(float argRed /*=0.0f*/, float argGreen /*=0.0f*/, float argBlue /*=0.0f*/, float argAlpha /*=1.0f*/)
: red(argRed), green(argGreen), blue(argBlue), alpha(argAlpha) {}
ColorRGBA ColorRGBA::operator+(ColorRGBA argOther)
{
	return ColorRGBA(red + argOther.red, green + argOther.green, blue + argOther.blue, alpha + argOther.alpha);
}
void ColorRGBA::operator+=(ColorRGBA argOther)
{
	red += argOther.red;
	green += argOther.green;
	blue += argOther.blue;
	alpha += argOther.alpha;
}
ColorRGBA ColorRGBA::operator-(ColorRGBA argOther)
{
	return ColorRGBA(red - argOther.red, green - argOther.green, blue - argOther.blue, alpha - argOther.alpha);
}
ColorRGBA ColorRGBA::operator*(float argMultiplier)
{
	return ColorRGBA(red * argMultiplier, green * argMultiplier, blue * argMultiplier, alpha * argMultiplier);
}
ColorRGBA ColorRGBA::operator/(float argDivisor)
{
	return ColorRGBA(red / argDivisor, green / argDivisor, blue / argDivisor, alpha / argDivisor);
}
