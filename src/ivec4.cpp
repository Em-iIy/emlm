#include "../mlm/ivec4.hpp"
#include <cassert>

namespace mlm {

ivec4::ivec4(const int &_x, const int &_y, const int &_z, const int &_w): x(_x), y(_y), z(_z), w(_w) {}
ivec4::ivec4(const int &_x, const int &_y, const int &_z, const ivec1 &_w): x(_x), y(_y), z(_z), w(_w.x) {}
ivec4::ivec4(const int &_x, const int &_y, const ivec1 &_z, const int &_w): x(_x), y(_y), z(_z.x), w(_w) {}
ivec4::ivec4(const int &_x, const int &_y, const ivec1 &_z, const ivec1 &_w): x(_x), y(_y), z(_z.x), w(_w.x) {}
ivec4::ivec4(const int &_x, const ivec1 &_y, const int &_z, const int &_w): x(_x), y(_y.x), z(_z), w(_w) {}
ivec4::ivec4(const int &_x, const ivec1 &_y, const int &_z, const ivec1 &_w): x(_x), y(_y.x), z(_z), w(_w.x) {}
ivec4::ivec4(const int &_x, const ivec1 &_y, const ivec1 &_z, const int &_w): x(_x), y(_y.x), z(_z.x), w(_w) {}
ivec4::ivec4(const int &_x, const ivec1 &_y, const ivec1 &_z, const ivec1 &_w): x(_x), y(_y.x), z(_z.x), w(_w.x) {}
ivec4::ivec4(const ivec1 &_x, const int &_y, const int &_z, const int &_w): x(_x.x), y(_y), z(_z), w(_w) {}
ivec4::ivec4(const ivec1 &_x, const int &_y, const int &_z, const ivec1 &_w): x(_x.x), y(_y), z(_z), w(_w.x) {}
ivec4::ivec4(const ivec1 &_x, const int &_y, const ivec1 &_z, const int &_w): x(_x.x), y(_y), z(_z.x), w(_w) {}
ivec4::ivec4(const ivec1 &_x, const int &_y, const ivec1 &_z, const ivec1 &_w): x(_x.x), y(_y), z(_z.x), w(_w.x) {}
ivec4::ivec4(const ivec1 &_x, const ivec1 &_y, const int &_z, const int &_w): x(_x.x), y(_y.x), z(_z), w(_w) {}
ivec4::ivec4(const ivec1 &_x, const ivec1 &_y, const int &_z, const ivec1 &_w): x(_x.x), y(_y.x), z(_z), w(_w.x) {}
ivec4::ivec4(const ivec1 &_x, const ivec1 &_y, const ivec1 &_z, const int &_w): x(_x.x), y(_y.x), z(_z.x), w(_w) {}
ivec4::ivec4(const ivec1 &_x, const ivec1 &_y, const ivec1 &_z, const ivec1 &_w): x(_x.x), y(_y.x), z(_z.x), w(_w.x) {}

ivec4::ivec4(const ivec2 &_xy, const int &_z, const int &_w): x(_xy.x), y(_xy.y), z(_z), w(_w) {}
ivec4::ivec4(const ivec2 &_xy, const ivec1 &_z, const int &_w): x(_xy.x), y(_xy.y), z(_z.x), w(_w) {}
ivec4::ivec4(const ivec2 &_xy, const int &_z, const ivec1 &_w): x(_xy.x), y(_xy.y), z(_z), w(_w.x) {}
ivec4::ivec4(const ivec2 &_xy, const ivec1 &_z, const ivec1 &_w): x(_xy.x), y(_xy.y), z(_z.x), w(_w.x) {}
ivec4::ivec4(const int &_x, const ivec2 &_yz, const int &_w): x(_x), y(_yz.x), z(_yz.y), w(_w) {}
ivec4::ivec4(const ivec1 &_x, const ivec2 &_yz, const int &_w): x(_x.x), y(_yz.x), z(_yz.y), w(_w) {}
ivec4::ivec4(const int &_x, const ivec2 &_yz, const ivec1 &_w): x(_x), y(_yz.x), z(_yz.y), w(_w.x) {}
ivec4::ivec4(const ivec1 &_x, const ivec2 &_yz, const ivec1 &_w): x(_x.x), y(_yz.x), z(_yz.y), w(_w.x) {}
ivec4::ivec4(const int &_x, const int &_y, const ivec2 &_zw): x(_x), y(_y), z(_zw.x), w(_zw.y) {}
ivec4::ivec4(const ivec1 &_x, const int &_y, const ivec2 &_zw): x(_x.x), y(_y), z(_zw.x), w(_zw.y) {}
ivec4::ivec4(const int &_x, const ivec1 &_y, const ivec2 &_zw): x(_x), y(_y.x), z(_zw.x), w(_zw.y) {}
ivec4::ivec4(const ivec1 &_x, const ivec1 &_y, const ivec2 &_zw): x(_x.x), y(_y.x), z(_zw.x), w(_zw.y) {}

ivec4::ivec4(const ivec2 &_xy, const ivec2 &_zw): x(_xy.x), y(_xy.y), z(_zw.x), w(_zw.y) {}
ivec4::ivec4(const ivec3 &_xyz, const int &_w): x(_xyz.x), y(_xyz.y), z(_xyz.z), w(_w) {}
ivec4::ivec4(const ivec3 &_xyz, const ivec1 &_w): x(_xyz.x), y(_xyz.y), z(_xyz.z), w(_w.x) {}
ivec4::ivec4(const int &_x, const ivec3 &_yzw): x(_x), y(_yzw.x), z(_yzw.y), w(_yzw.z) {}
ivec4::ivec4(const ivec1 &_x, const ivec3 &_yzw): x(_x.x), y(_yzw.x), z(_yzw.y), w(_yzw.z) {}

ivec4::ivec4(const int &scalar): x(scalar), y(scalar), z(scalar), w(scalar) {}
ivec4::ivec4(const ivec1 &scalar): x(scalar.x), y(scalar.x), z(scalar.x), w(scalar.x) {}
ivec4::ivec4(const ivec4 &v): x(v.x), y(v.y), z(v.z), w(v.w) {}

ivec4::ivec4() {};
ivec4::~ivec4() {};


int	&ivec4::operator[](unsigned int i)
{
	assert(i < 4);
	switch (i)
	{
	default:
	case 0:
		return (this->x);
	case 1:
		return (this->y);
	case 2:
		return (this->z);
	case 3:
		return (this->w);
	}
}
const int	&ivec4::operator[](unsigned int i) const
{
	assert(i < 4);
	switch (i)
	{
	default:
	case 0:
		return (this->x);
	case 1:
		return (this->y);
	case 2:
		return (this->z);
	case 3:
		return (this->w);
	}
}

ivec4	&ivec4::operator=(const ivec4 &v)
{
	this->x = v.x;
	this->y = v.y;
	this->z = v.z;
	this->w = v.w;
	return (*this);
}

bool	ivec4::operator==(const ivec4 &v)
{
	return (this->x == v.x && this->y == v.y && this->z == v.z && this->w == v.w);
}
bool	ivec4::operator!=(const ivec4 &v)
{
	return (this->x != v.x && this->y != v.y && this->z != v.z && this->w != v.w);
}

ivec4	&ivec4::operator-=(const ivec4 &v)
{
	this->x -= v.x;
	this->y -= v.y;
	this->z -= v.z;
	this->w -= v.w;
	return (*this);
}

ivec4	&ivec4::operator-=(const ivec1 &scalar)
{
	this->x -= scalar.x;
	this->y -= scalar.x;
	this->z -= scalar.x;
	this->w -= scalar.x;
	return (*this);
}

ivec4	&ivec4::operator-=(const int &scalar)
{
	this->x -= scalar;
	this->y -= scalar;
	this->z -= scalar;
	this->w -= scalar;
	return (*this);
}

ivec4	&ivec4::operator+=(const ivec4 &v)
{
	this->x += v.x;
	this->y += v.y;
	this->z += v.z;
	this->w += v.w;
	return (*this);
}

ivec4	&ivec4::operator+=(const ivec1 &scalar)
{
	this->x += scalar.x;
	this->y += scalar.x;
	this->z += scalar.x;
	this->w += scalar.x;
	return (*this);
}

ivec4	&ivec4::operator+=(const int &scalar)
{
	this->x += scalar;
	this->y += scalar;
	this->z += scalar;
	this->w += scalar;
	return (*this);
}

ivec4	&ivec4::operator*=(const ivec4 &v)
{
	this->x *= v.x;
	this->y *= v.y;
	this->z *= v.z;
	this->w *= v.w;
	return (*this);
}

ivec4	&ivec4::operator*=(const ivec1 &scalar)
{
	this->x *= scalar.x;
	this->y *= scalar.x;
	this->z *= scalar.x;
	this->w *= scalar.x;
	return (*this);
}

ivec4	&ivec4::operator*=(const int &scalar)
{
	this->x *= scalar;
	this->y *= scalar;
	this->z *= scalar;
	this->w *= scalar;
	return (*this);
}

ivec4	&ivec4::operator/=(const ivec4 &v)
{
	this->x /= v.x;
	this->y /= v.y;
	this->z /= v.z;
	this->w /= v.w;
	return (*this);
}

ivec4	&ivec4::operator/=(const ivec1 &scalar)
{
	this->x /= scalar.x;
	this->y /= scalar.x;
	this->z /= scalar.x;
	this->w /= scalar.x;
	return (*this);
}

ivec4	&ivec4::operator/=(const int &scalar)
{
	this->x /= scalar;
	this->y /= scalar;
	this->z /= scalar;
	this->w /= scalar;
	return (*this);
}

ivec4	operator-(const ivec4 &v1, const ivec4 &v2)
{
	return (
		ivec4(
			v1.x - v2.x,
			v1.y - v2.y,
			v1.z - v2.z,
			v1.w - v2.w
		)
	);
}

ivec4	operator-(const int &scalar, const ivec4 &v)
{
	return (
		ivec4(
			scalar - v.x,
			scalar - v.y,
			scalar - v.z,
			scalar - v.w
		)
	);
}

ivec4	operator-(const ivec4 &v, const int &scalar)
{
	return (
		ivec4(
			v.x - scalar,
			v.y - scalar,
			v.z - scalar,
			v.w - scalar
		)
	);
}

ivec4	operator-(const ivec1 &scalar, const ivec4 &v)
{
	return (
		ivec4(
			scalar.x - v.x,
			scalar.x - v.y,
			scalar.x - v.z,
			scalar.x - v.w
		)
	);
}

ivec4	operator-(const ivec4 &v, const ivec1 &scalar)
{
	return (
		ivec4(
			v.x - scalar.x,
			v.y - scalar.x,
			v.z - scalar.x,
			v.w - scalar.x
		)
	);
}

ivec4	operator+(const ivec4 &v1, const ivec4 &v2)
{
	return (
		ivec4(
			v1.x + v2.x,
			v1.y + v2.y,
			v1.z + v2.z,
			v1.w + v2.w
		)
	);
}

ivec4	operator+(const int &scalar, const ivec4 &v)
{
	return (
		ivec4(
			scalar + v.x,
			scalar + v.y,
			scalar + v.z,
			scalar + v.w
		)
	);
}

ivec4	operator+(const ivec4 &v, const int &scalar)
{
	return (
		ivec4(
			v.x + scalar,
			v.y + scalar,
			v.z + scalar,
			v.w + scalar
		)
	);
}

ivec4	operator+(const ivec1 &scalar, const ivec4 &v)
{
	return (
		ivec4(
			scalar.x + v.x,
			scalar.x + v.y,
			scalar.x + v.z,
			scalar.x + v.w
		)
	);
}

ivec4	operator+(const ivec4 &v, const ivec1 &scalar)
{
	return (
		ivec4(
			v.x + scalar.x,
			v.y + scalar.x,
			v.z + scalar.x,
			v.w + scalar.x
		)
	);
}

ivec4	operator*(const ivec4 &v1, const ivec4 &v2)
{
	return (
		ivec4(
			v1.x * v2.x,
			v1.y * v2.y,
			v1.z * v2.z,
			v1.w * v2.w
		)
	);
}

ivec4	operator*(const int &scalar, const ivec4 &v)
{
	return (
		ivec4(
			scalar * v.x,
			scalar * v.y,
			scalar * v.z,
			scalar * v.w
		)
	);
}

ivec4	operator*(const ivec4 &v, const int &scalar)
{
	return (
		ivec4(
			v.x * scalar,
			v.y * scalar,
			v.z * scalar,
			v.w * scalar
		)
	);
}

ivec4	operator*(const ivec1 &scalar, const ivec4 &v)
{
	return (
		ivec4(
			scalar.x * v.x,
			scalar.x * v.y,
			scalar.x * v.z,
			scalar.x * v.w
		)
	);
}

ivec4	operator*(const ivec4 &v, const ivec1 &scalar)
{
	return (
		ivec4(
			v.x * scalar.x,
			v.y * scalar.x,
			v.z * scalar.x,
			v.w * scalar.x
		)
	);
}

ivec4	operator/(const ivec4 &v1, const ivec4 &v2)
{
	return (
		ivec4(
			v1.x / v2.x,
			v1.y / v2.y,
			v1.z / v2.z,
			v1.w / v2.w
		)
	);
}

ivec4	operator/(const int &scalar, const ivec4 &v)
{
	return (
		ivec4(
			scalar / v.x,
			scalar / v.y,
			scalar / v.z,
			scalar / v.w
		)
	);
}

ivec4	operator/(const ivec4 &v, const int &scalar)
{
	return (
		ivec4(
			v.x / scalar,
			v.y / scalar,
			v.z / scalar,
			v.w / scalar
		)
	);
}

ivec4	operator/(const ivec1 &scalar, const ivec4 &v)
{
	return (
		ivec4(
			scalar.x / v.x,
			scalar.x / v.y,
			scalar.x / v.z,
			scalar.x / v.w
		)
	);
}

ivec4	operator/(const ivec4 &v, const ivec1 &scalar)
{
	return (
		ivec4(
			v.x / scalar.x,
			v.y / scalar.x,
			v.z / scalar.x,
			v.w / scalar.x
		)
	);
}


}
