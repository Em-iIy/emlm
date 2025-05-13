#include "../mlm/ivec3.hpp"
#include <cassert>

namespace mlm {

ivec3::ivec3(const int &_x, const int &_y, const int &_z): x(_x), y(_y), z(_z) {}
ivec3::ivec3(const int &_x, const int &_y, const ivec1 &_z): x(_x), y(_y), z(_z.x) {}
ivec3::ivec3(const int &_x, const ivec1 &_y, const int &_z): x(_x), y(_y.x), z(_z) {}
ivec3::ivec3(const int &_x, const ivec1 &_y, const ivec1 &_z): x(_x), y(_y.x), z(_z.x) {}
ivec3::ivec3(const ivec1 &_x, const int &_y, const int &_z): x(_x.x), y(_y), z(_z) {}
ivec3::ivec3(const ivec1 &_x, const int &_y, const ivec1 &_z): x(_x.x), y(_y), z(_z.x) {}
ivec3::ivec3(const ivec1 &_x, const ivec1 &_y, const int &_z): x(_x.x), y(_y.x), z(_z) {}
ivec3::ivec3(const ivec1 &_x, const ivec1 &_y, const ivec1 &_z): x(_x.x), y(_y.x), z(_z.x) {}

ivec3::ivec3(const ivec2 &src, const int &_z): x(src.x), y(src.y), z(_z) {}
ivec3::ivec3(const ivec2 &src, const ivec1 &_z): x(src.x), y(src.y), z(_z.x) {}
ivec3::ivec3(const int &_x, const ivec2 &src): x(_x), y(src.x), z(src.y) {}
ivec3::ivec3(const ivec1 &_x, const ivec2 &src): x(_x.x), y(src.x), z(src.y) {}

ivec3::ivec3(const int &scalar): x(scalar), y(scalar), z(scalar) {}
ivec3::ivec3(const ivec1 &scalar): x(scalar.x), y(scalar.x), z(scalar.x) {}
ivec3::ivec3(const ivec3 &v): x(v.x), y(v.y), z(v.z) {}

ivec3::ivec3() {}
ivec3::~ivec3() {}

ivec3::operator vec3() const
{
	return (
		vec3(
			static_cast<float>(this->x),
			static_cast<float>(this->y),
			static_cast<float>(this->z)
		)
	);
}

ivec3	&ivec3::operator=(const ivec3 &v)
{
	this->x = v.x;
	this->y = v.y;
	this->z = v.z;
	return (*this);
}

int	&ivec3::operator[](unsigned int i)
{
	assert(i < 3);
	switch(i)
	{
	default:
	case 0:
		return (this->x);
	case 1:
		return (this->y);
	case 2:
		return (this->z);
	}
}

const int	&ivec3::operator[](unsigned int i) const
{
	assert(i < 3);
	switch(i)
	{
	default:
	case 0:
		return (this->x);
	case 1:
		return (this->y);
	case 2:
		return (this->z);
	}
}

bool	ivec3::operator==(const ivec3 &v)
{
	return (this->x == v.x && this->y == v.y && this->z == v.z);
}

bool	ivec3::operator!=(const ivec3 &v)
{
	return (this->x != v.x && this->y != v.y && this->z != v.z);
}

ivec3	&ivec3::operator-=(const ivec3 &v)
{
	this->x -= v.x;
	this->y -= v.y;
	this->z -= v.z;
	return (*this);
}

ivec3	&ivec3::operator-=(const ivec1 &scalar)
{
	this->x -= scalar.x;
	this->y -= scalar.x;
	this->z -= scalar.x;
	return (*this);
}

ivec3	&ivec3::operator-=(const int &scalar)
{
	this->x -= scalar;
	this->y -= scalar;
	this->z -= scalar;
	return (*this);
}

ivec3	&ivec3::operator+=(const ivec3 &v)
{
	this->x += v.x;
	this->y += v.y;
	this->z += v.z;
	return (*this);
}

ivec3	&ivec3::operator+=(const ivec1 &scalar)
{
	this->x += scalar.x;
	this->y += scalar.x;
	this->z += scalar.x;
	return (*this);
}

ivec3	&ivec3::operator+=(const int &scalar)
{
	this->x += scalar;
	this->y += scalar;
	this->z += scalar;
	return (*this);
}

ivec3	&ivec3::operator*=(const ivec3 &v)
{
	this->x *= v.x;
	this->y *= v.y;
	this->z *= v.z;
	return (*this);
}

ivec3	&ivec3::operator*=(const ivec1 &scalar)
{
	this->x *= scalar.x;
	this->y *= scalar.x;
	this->z *= scalar.x;
	return (*this);
}

ivec3	&ivec3::operator*=(const int &scalar)
{
	this->x *= scalar;
	this->y *= scalar;
	this->z *= scalar;
	return (*this);
}

ivec3	&ivec3::operator/=(const ivec3 &v)
{
	this->x /= v.x;
	this->y /= v.y;
	this->z /= v.z;
	return (*this);
}

ivec3	&ivec3::operator/=(const ivec1 &scalar)
{
	this->x /= scalar.x;
	this->y /= scalar.x;
	this->z /= scalar.x;
	return (*this);
}

ivec3	&ivec3::operator/=(const int &scalar)
{
	this->x /= scalar;
	this->y /= scalar;
	this->z /= scalar;
	return (*this);
}

ivec3	operator-(const ivec3 &v1, const ivec3 &v2)
{
	return (
		ivec3(
			v1.x - v2.x,
			v1.y - v2.y,
			v1.z - v2.z
		)
	);
}

ivec3	operator-(const int &scalar, const ivec3 &v)
{
	return (
		ivec3(
			scalar - v.x,
			scalar - v.y,
			scalar - v.z
		)
	);
}

ivec3	operator-(const ivec3 &v, const int &scalar)
{
	return (
		ivec3(
			v.x - scalar,
			v.y - scalar,
			v.z - scalar
		)
	);
}

ivec3	operator-(const ivec1 &scalar, const ivec3 &v)
{
	return (
		ivec3(
			scalar.x - v.x,
			scalar.x - v.y,
			scalar.x - v.z
		)
	);
}

ivec3	operator-(const ivec3 &v, const ivec1 &scalar)
{
	return (
		ivec3(
			v.x - scalar.x,
			v.y - scalar.x,
			v.z - scalar.x
		)
	);
}

ivec3	operator+(const ivec3 &v1, const ivec3 &v2)
{
	return (
		ivec3(
			v1.x + v2.x,
			v1.y + v2.y,
			v1.z + v2.z
		)
	);
}

ivec3	operator+(const int &scalar, const ivec3 &v)
{
	return (
		ivec3(
			scalar + v.x,
			scalar + v.y,
			scalar + v.z
		)
	);
}

ivec3	operator+(const ivec3 &v, const int &scalar)
{
	return (
		ivec3(
			v.x + scalar,
			v.y + scalar,
			v.z + scalar
		)
	);
}

ivec3	operator+(const ivec1 &scalar, const ivec3 &v)
{
	return (
		ivec3(
			scalar.x + v.x,
			scalar.x + v.y,
			scalar.x + v.z
		)
	);
}

ivec3	operator+(const ivec3 &v, const ivec1 &scalar)
{
	return (
		ivec3(
			v.x + scalar.x,
			v.y + scalar.x,
			v.z + scalar.x
		)
	);
}

ivec3	operator*(const ivec3 &v1, const ivec3 &v2)
{
	return (
		ivec3(
			v1.x * v2.x,
			v1.y * v2.y,
			v1.z * v2.z
		)
	);
}

ivec3	operator*(const int &scalar, const ivec3 &v)
{
	return (
		ivec3(
			scalar * v.x,
			scalar * v.y,
			scalar * v.z
		)
	);
}

ivec3	operator*(const ivec3 &v, const int &scalar)
{
	return (
		ivec3(
			v.x * scalar,
			v.y * scalar,
			v.z * scalar
		)
	);
}

ivec3	operator*(const ivec1 &scalar, const ivec3 &v)
{
	return (
		ivec3(
			scalar.x * v.x,
			scalar.x * v.y,
			scalar.x * v.z
		)
	);
}

ivec3	operator*(const ivec3 &v, const ivec1 &scalar)
{
	return (
		ivec3(
			v.x * scalar.x,
			v.y * scalar.x,
			v.z * scalar.x
		)
	);
}

ivec3	operator/(const ivec3 &v1, const ivec3 &v2)
{
	return (
		ivec3(
			v1.x / v2.x,
			v1.y / v2.y,
			v1.z / v2.z
		)
	);
}

ivec3	operator/(const int &scalar, const ivec3 &v)
{
	return (
		ivec3(
			scalar / v.x,
			scalar / v.y,
			scalar / v.z
		)
	);
}

ivec3	operator/(const ivec3 &v, const int &scalar)
{
	return (
		ivec3(
			v.x / scalar,
			v.y / scalar,
			v.z / scalar
		)
	);
}

ivec3	operator/(const ivec1 &scalar, const ivec3 &v)
{
	return (
		ivec3(
			scalar.x / v.x,
			scalar.x / v.y,
			scalar.x / v.z
		)
	);
}

ivec3	operator/(const ivec3 &v, const ivec1 &scalar)
{
	return (
		ivec3(
			v.x / scalar.x,
			v.y / scalar.x,
			v.z / scalar.x
		)
	);
}

}
