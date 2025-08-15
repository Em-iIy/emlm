#pragma once

#include "ivec1.hpp"
#include "ivec2.hpp"
#include "vec3.hpp"

namespace mlm {

struct vec3;

struct ivec3 {
	int x;
	int y;
	int z;

	ivec3(const int &_x, const int &_y, const int &_z);
	ivec3(const int &_x, const int &_y, const ivec1 &_z);
	ivec3(const int &_x, const ivec1 &_y, const int &_z);
	ivec3(const int &_x, const ivec1 &_y, const ivec1 &_z);
	ivec3(const ivec1 &_x, const int &_y, const int &_z);
	ivec3(const ivec1 &_x, const int &_y, const ivec1 &_z);
	ivec3(const ivec1 &_x, const ivec1 &_y, const int &_z);
	ivec3(const ivec1 &_x, const ivec1 &_y, const ivec1 &_z);

	ivec3(const ivec2 &v, const int &_z);
	ivec3(const ivec2 &v, const ivec1 &_z);
	ivec3(const int &_x, const ivec2 &v);
	ivec3(const ivec1 &_x, const ivec2 &v);

	ivec3(const int &scalar);
	ivec3(const ivec1 &scalar);
	ivec3(const ivec3 &v);

	ivec3();
	~ivec3();

	operator vec3() const;

	int	&operator[](unsigned int i);
	const int	&operator[](unsigned int i) const;

	ivec3	&operator=(const ivec3 &v);

	bool	operator==(const ivec3 &v) const;
	bool	operator!=(const ivec3 &v) const;

	ivec3	&operator-=(const ivec3 &v);
	ivec3	&operator-=(const ivec1 &scalar);
	ivec3	&operator-=(const int &scalar);

	ivec3	&operator+=(const ivec3 &v);
	ivec3	&operator+=(const ivec1 &scalar);
	ivec3	&operator+=(const int &scalar);

	ivec3	&operator*=(const ivec3 &v);
	ivec3	&operator*=(const ivec1 &scalar);
	ivec3	&operator*=(const int &scalar);

	ivec3	&operator/=(const ivec3 &v);
	ivec3	&operator/=(const ivec1 &scalar);
	ivec3	&operator/=(const int &scalar);
};

ivec3	operator-(const ivec3 &v1, const ivec3 &v2);
ivec3	operator-(const int &scalar, const ivec3 &v);
ivec3	operator-(const ivec3 &v, const int &scalar);
ivec3	operator-(const ivec1 &scalar, const ivec3 &v);
ivec3	operator-(const ivec3 &v, const ivec1 &scalar);

ivec3	operator+(const ivec3 &v1, const ivec3 &v2);
ivec3	operator+(const int &scalar, const ivec3 &v);
ivec3	operator+(const ivec3 &v, const int &scalar);
ivec3	operator+(const ivec1 &scalar, const ivec3 &v);
ivec3	operator+(const ivec3 &v, const ivec1 &scalar);

ivec3	operator*(const ivec3 &v1, const ivec3 &v2);
ivec3	operator*(const int &scalar, const ivec3 &v);
ivec3	operator*(const ivec3 &v, const int &scalar);
ivec3	operator*(const ivec1 &scalar, const ivec3 &v);
ivec3	operator*(const ivec3 &v, const ivec1 &scalar);

ivec3	operator/(const ivec3 &v1, const ivec3 &v2);
ivec3	operator/(const int &scalar, const ivec3 &v);
ivec3	operator/(const ivec3 &v, const int &scalar);
ivec3	operator/(const ivec1 &scalar, const ivec3 &v);
ivec3	operator/(const ivec3 &v, const ivec1 &scalar);


}
