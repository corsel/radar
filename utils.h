#ifndef _UTILS_H_INCLUDED
#define _UTILS_H_INCLUDED

struct Vec2
{
	float x;
	float y;
	
	Vec2(float argX = 0.0f, float argY = 0.0f);
	Vec2 operator+(Vec2 argOther);
	void operator+=(Vec2 argOther);
	Vec2 operator-(Vec2 argOther);
	Vec2 operator*(float argMultiplier);
	Vec2 operator/(float argDivisor);
};

struct Transport 
{
	Vec2 posn;
	float rotn;
	
	Transport(Vec2 argPosn = Vec2(), float argRotn = 0.0f);
};

struct Rectangle
{
	Vec2 p0, p1, p2, p3;
	Rectangle(Vec2 argP0, Vec2 argP1, Vec2 argP2, Vec2 argP3);
};

struct ColorRGBA
{
	float red;
	float green;
	float blue;
	float alpha;
	
	ColorRGBA(float argRed = 0.0f, float argGreen = 0.0f, float argBlue = 0.0f, float argAlpha = 1.0f);
	ColorRGBA operator+(ColorRGBA argOther);
	void operator+=(ColorRGBA argOther);
	ColorRGBA operator-(ColorRGBA argOther);
	ColorRGBA operator*(float argMultiplier);
	ColorRGBA operator/(float argDivisor);
};
#endif // _UTILS_H_INCLUDED

