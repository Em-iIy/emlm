#pragma once

#include "ivec1.hpp"
#include "vec2.hpp"

namespace mlm {

struct vec2;

struct ivec2 {
	int x;
	int y;

	ivec2(const int &_x, const int &_y);
	ivec2(const int &_x, const ivec1 &_y);
	ivec2(const ivec1 &_x, const int &_y);
	ivec2(const ivec1 &_x, const ivec1 &_y);

	ivec2(const int &scalar);
	ivec2(const ivec1 &scalar);
	ivec2(const ivec2 &v);

	ivec2();
	~ivec2();

	operator vec2() const;

	int	&operator[](unsigned int i);
	const int	&operator[](unsigned int i) const;

	ivec2	&operator=(const ivec2 &v);

	bool	operator==(const ivec2 &v);
	bool	operator!=(const ivec2 &v);

	ivec2	&operator-=(const ivec2 &v);
	ivec2	&operator-=(const ivec1 &scalar);
	ivec2	&operator-=(const int &scalar);

	ivec2	&operator+=(const ivec2 &v);
	ivec2	&operator+=(const ivec1 &scalar);
	ivec2	&operator+=(const int &scalar);

	ivec2	&operator*=(const ivec2 &v);
	ivec2	&operator*=(const ivec1 &scalar);
	ivec2	&operator*=(const int &scalar);

	ivec2	&operator/=(const ivec2 &v);
	ivec2	&operator/=(const ivec1 &scalar);
	ivec2	&operator/=(const int &scalar);
};

ivec2	operator-(const ivec2 &v1, const ivec2 &v2);
ivec2	operator-(const int &scalar, const ivec2 &v);
ivec2	operator-(const ivec1 &scalar, const ivec2 &v);
ivec2	operator-(const ivec2 &v, const int &scalar);
ivec2	operator-(const ivec2 &v, const ivec1 &scalar);

ivec2	operator+(const ivec2 &v1, const ivec2 &v2);
ivec2	operator+(const int &scalar, const ivec2 &v);
ivec2	operator+(const ivec1 &scalar, const ivec2 &v);
ivec2	operator+(const ivec2 &v, const int &scalar);
ivec2	operator+(const ivec2 &v, const ivec1 &scalar);

ivec2	operator*(const ivec2 &v1, const ivec2 &v2);
ivec2	operator*(const int &scalar, const ivec2 &v);
ivec2	operator*(const ivec1 &scalar, const ivec2 &v);
ivec2	operator*(const ivec2 &v, const int &scalar);
ivec2	operator*(const ivec2 &v, const ivec1 &scalar);

ivec2	operator/(const ivec2 &v1, const ivec2 &v2);
ivec2	operator/(const int &scalar, const ivec2 &v);
ivec2	operator/(const ivec1 &scalar, const ivec2 &v);
ivec2	operator/(const ivec2 &v, const int &scalar);
ivec2	operator/(const ivec2 &v, const ivec1 &scalar);

}
