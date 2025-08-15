#pragma once

#include "ivec1.hpp"

namespace mlm {

struct ivec1;

struct vec1 {
	float x;

	vec1(const float &_n);
	vec1(const vec1 &src);

	vec1();
	~vec1();

	operator ivec1() const;

	float	&operator[](unsigned int i);
	const float	&operator[](unsigned int i) const;

	vec1	&operator=(const vec1 &v);
	vec1	&operator=(const float &scalar);

	bool	operator==(const vec1 &v) const;
	bool	operator==(const float &scalar) const;
	bool	operator!=(const vec1 &v) const;
	bool	operator!=(const float &scalar) const;


	vec1	&operator-=(const vec1 &v);
	vec1	&operator-=(const float &scalar);

	vec1	&operator+=(const vec1 &v);
	vec1	&operator+=(const float &scalar);

	vec1	&operator*=(const vec1 &v);
	vec1	&operator*=(const float &scalar);

	vec1	&operator/=(const vec1 &v);
	vec1	&operator/=(const float &scalar);
};

vec1	operator-(const vec1 &v, const float scalar);
vec1	operator-(const float &scalar, const vec1 &v);
vec1	operator-(const vec1 &v, const vec1 &v2);

vec1	operator+(const vec1 &v, const float scalar);
vec1	operator+(const float &scalar, const vec1 &v);
vec1	operator+(const vec1 &v, const vec1 &v2);

vec1	operator*(const vec1 &v, const float scalar);
vec1	operator*(const float &scalar, const vec1 &v);
vec1	operator*(const vec1 &v, const vec1 &v2);

vec1	operator/(const vec1 &v, const float scalar);
vec1	operator/(const float &scalar, const vec1 &v);
vec1	operator/(const vec1 &v, const vec1 &v2);

}
