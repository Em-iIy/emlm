#include "../mlm/ivec2.hpp"
#include <cassert>

namespace mlm {

ivec2::ivec2(const int &_x, const int &_y): x(_x), y(_y) {}
ivec2::ivec2(const int &_x, const ivec1 &_y): x(_x), y(_y.x) {}
ivec2::ivec2(const ivec1 &_x, const int &_y): x(_x.x), y(_y) {}
ivec2::ivec2(const ivec1 &_x, const ivec1 &_y): x(_x.x), y(_y.x) {}

ivec2::ivec2(const int &scalar): x(scalar), y(scalar) {}
ivec2::ivec2(const ivec1 &scalar): x(scalar.x), y(scalar.x) {}
ivec2::ivec2(const ivec2 &v): x(v.x), y(v.y) {}

ivec2::ivec2() {}
ivec2::~ivec2() {}

ivec2::operator vec2() const
{
	return (
		vec2(
			static_cast<float>(this->x),
			static_cast<float>(this->y)
		)
	);
}

int	&ivec2::operator[](unsigned int i)
{
	assert(i < 2);
	switch(i)
	{
	default:
	case 0:
		return (this->x);
	case 1:
		return (this->y);
	}
}

const int	&ivec2::operator[](unsigned int i) const
{
	assert(i < 2);
	switch(i)
	{
	default:
	case 0:
		return (this->x);
	case 1:
		return (this->y);
	}
}

ivec2	&ivec2::operator=(const ivec2 &v)
{
	this->x = v.x;
	this->y = v.y;
	return (*this);
}

bool	ivec2::operator==(const ivec2 &v) const
{
	return (this->x == v.x && this->y == v.y);
}

bool	ivec2::operator!=(const ivec2 &v) const
{
	return (this->x != v.x || this->y != v.y);
}

ivec2	&ivec2::operator-=(const ivec2 &v)
{
	this->x -= v.x;
	this->y -= v.y;
	return (*this);
}

ivec2	&ivec2::operator-=(const int &scalar)
{
	this->x -= scalar;
	this->y -= scalar;
	return (*this);
}

ivec2	&ivec2::operator-=(const ivec1 &scalar)
{
	this->x -= scalar.x;
	this->y -= scalar.x;
	return (*this);
}

ivec2	&ivec2::operator+=(const ivec2 &v)
{
	this->x += v.x;
	this->y += v.y;
	return (*this);
}

ivec2	&ivec2::operator+=(const int &scalar)
{
	this->x += scalar;
	this->y += scalar;
	return (*this);
}

ivec2	&ivec2::operator+=(const ivec1 &scalar)
{
	this->x += scalar.x;
	this->y += scalar.x;
	return (*this);
}

ivec2	&ivec2::operator*=(const ivec2 &v)
{
	this->x *= v.x;
	this->y *= v.y;
	return (*this);
}

ivec2	&ivec2::operator*=(const int &scalar)
{
	this->x *= scalar;
	this->y *= scalar;
	return (*this);
}

ivec2	&ivec2::operator*=(const ivec1 &scalar)
{
	this->x *= scalar.x;
	this->y *= scalar.x;
	return (*this);
}

ivec2	&ivec2::operator/=(const ivec2 &v)
{
	this->x /= v.x;
	this->y /= v.y;
	return (*this);
}

ivec2	&ivec2::operator/=(const int &scalar)
{
	this->x /= scalar;
	this->y /= scalar;
	return (*this);
}

ivec2	&ivec2::operator/=(const ivec1 &scalar)
{
	this->x /= scalar.x;
	this->y /= scalar.x;
	return (*this);
}

ivec2	operator-(const ivec2 &v1, const ivec2 &v2)
{
	return (
		ivec2(
			v1.x - v2.x,
			v1.y - v2.y
		)
	);
}

ivec2	operator-(const int &scalar, const ivec2 &v)
{
	return (
		ivec2(
			scalar - v.x,
			scalar - v.y
		)
	);
}

ivec2	operator-(const ivec1 &scalar, const ivec2 &v)
{
	return (
		ivec2(
			scalar.x - v.x,
			scalar.x - v.y
		)
	);
}

ivec2	operator-(const ivec2 &v, const int &scalar)
{
	return (
		ivec2(
			v.x - scalar,
			v.y - scalar
		)
	);
}

ivec2	operator-(const ivec2 &v, const ivec1 &scalar)
{
	return (
		ivec2(
			v.x - scalar.x,
			v.y - scalar.x
		)
	);
}


ivec2	operator+(const ivec2 &v1, const ivec2 &v2)
{
	return (
		ivec2(
			v1.x + v2.x,
			v1.y + v2.y
		)
	);
}

ivec2	operator+(const int &scalar, const ivec2 &v)
{
	return (
		ivec2(
			scalar + v.x,
			scalar + v.y
		)
	);
}

ivec2	operator+(const ivec1 &scalar, const ivec2 &v)
{
	return (
		ivec2(
			scalar.x + v.x,
			scalar.x + v.y
		)
	);
}

ivec2	operator+(const ivec2 &v, const int &scalar)
{
	return (
		ivec2(
			v.x + scalar,
			v.y + scalar
		)
	);
}

ivec2	operator+(const ivec2 &v, const ivec1 &scalar)
{
	return (
		ivec2(
			v.x + scalar.x,
			v.y + scalar.x
		)
	);
}


ivec2	operator*(const ivec2 &v1, const ivec2 &v2)
{
	return (
		ivec2(
			v1.x * v2.x,
			v1.y * v2.y
		)
	);
}

ivec2	operator*(const int &scalar, const ivec2 &v)
{
	return (
		ivec2(
			scalar * v.x,
			scalar * v.y
		)
	);
}

ivec2	operator*(const ivec1 &scalar, const ivec2 &v)
{
	return (
		ivec2(
			scalar.x * v.x,
			scalar.x * v.y
		)
	);
}

ivec2	operator*(const ivec2 &v, const int &scalar)
{
	return (
		ivec2(
			v.x * scalar,
			v.y * scalar
		)
	);
}

ivec2	operator*(const ivec2 &v, const ivec1 &scalar)
{
	return (
		ivec2(
			v.x * scalar.x,
			v.y * scalar.x
		)
	);
}


ivec2	operator/(const ivec2 &v1, const ivec2 &v2)
{
	return (
		ivec2(
			v1.x / v2.x,
			v1.y / v2.y
		)
	);
}

ivec2	operator/(const int &scalar, const ivec2 &v)
{
	return (
		ivec2(
			scalar / v.x,
			scalar / v.y
		)
	);
}

ivec2	operator/(const ivec1 &scalar, const ivec2 &v)
{
	return (
		ivec2(
			scalar.x / v.x,
			scalar.x / v.y
		)
	);
}

ivec2	operator/(const ivec2 &v, const int &scalar)
{
	return (
		ivec2(
			v.x / scalar,
			v.y / scalar
		)
	);
}

ivec2	operator/(const ivec2 &v, const ivec1 &scalar)
{
	return (
		ivec2(
			v.x / scalar.x,
			v.y / scalar.x
		)
	);
}


}
