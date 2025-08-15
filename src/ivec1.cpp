#include "../mlm/ivec1.hpp"
#include <cassert>

namespace mlm {

ivec1::ivec1(const int &_n): x(_n) {}
ivec1::ivec1(const ivec1 &src): x(src.x) {}

ivec1::ivec1() {}
ivec1::~ivec1() {}

ivec1::operator vec1() const
{
	return (
		vec1(
			static_cast<float>(this->x)
		)
	);
}

int	&ivec1::operator[](unsigned int i)
{
	assert(1 < 3);
	switch (i)
	{
	default:
	case 0:
		return (this->x);
	}
}

const int	&ivec1::operator[](unsigned int i) const
{
	assert(1 < 3);
	switch (i)
	{
	default:
	case 0:
		return (this->x);
	}
}

ivec1	&ivec1::operator=(const ivec1 &v)
{
	this->x = v.x;
	return (*this);
}

ivec1	&ivec1::operator=(const int &scalar)
{
	this->x = scalar;
	return (*this);
}

bool	ivec1::operator==(const ivec1 &v) const
{
	return (this->x == v.x);
}

bool	ivec1::operator==(const int &scalar) const
{
	return (this->x == scalar);
}

bool	ivec1::operator!=(const ivec1 &v) const
{
	return (this->x != v.x);
}

bool	ivec1::operator!=(const int &scalar) const
{
	return (this->x != scalar);
}

ivec1	&ivec1::operator-=(const ivec1 &v)
{
	this->x -= v.x;
	return (*this);
}

ivec1	&ivec1::operator-=(const int &scalar)
{
	this->x -= scalar;
	return (*this);
}

ivec1	&ivec1::operator+=(const ivec1 &v)
{
	this->x += v.x;
	return (*this);
}

ivec1	&ivec1::operator+=(const int &scalar)
{
	this->x += scalar;
	return (*this);
}

ivec1	&ivec1::operator*=(const ivec1 &v)
{
	this->x *= v.x;
	return (*this);
}

ivec1	&ivec1::operator*=(const int &scalar)
{
	this->x *= scalar;
	return (*this);
}

ivec1	&ivec1::operator/=(const ivec1 &v)
{
	this->x /= v.x;
	return (*this);
}

ivec1	&ivec1::operator/=(const int &scalar)
{
	this->x /= scalar;
	return (*this);
}

ivec1	operator-(const ivec1 &v, const int scalar)
{
	return (
		ivec1(
			v.x - scalar
		)
	);
}

ivec1	operator-(const int &scalar, const ivec1 &v)
{
	return (
		ivec1(
			scalar - v.x
		)
	);
}

ivec1	operator-(const ivec1 &v1, const ivec1 &v2)
{
	return (
		ivec1(
			v1.x - v2.x
		)
	);

}

ivec1	operator+(const ivec1 &v, const int scalar)
{
	return (
		ivec1(
			v.x + scalar
		)
	);
}

ivec1	operator+(const int &scalar, const ivec1 &v)
{
	return (
		ivec1(
			scalar + v.x
		)
	);
}

ivec1	operator+(const ivec1 &v1, const ivec1 &v2)
{
	return (
		ivec1(
			v1.x + v2.x
		)
	);

}

ivec1	operator*(const ivec1 &v, const int scalar)
{
	return (
		ivec1(
			v.x * scalar
		)
	);
}

ivec1	operator*(const int &scalar, const ivec1 &v)
{
	return (
		ivec1(
			scalar * v.x
		)
	);
}


ivec1	operator*(const ivec1 &v1, const ivec1 &v2)
{
	return (
		ivec1(
			v1.x * v2.x
		)
	);

}

ivec1	operator/(const ivec1 &v, const int scalar)
{
	return (
		ivec1(
			v.x / scalar
		)
	);
}

ivec1	operator/(const int &scalar, const ivec1 &v)
{
	return (
		ivec1(
			scalar / v.x
		)
	);
}

ivec1	operator/(const ivec1 &v1, const ivec1 &v2)
{
	return (
		ivec1(
			v1.x / v2.x
		)
	);

}

}
