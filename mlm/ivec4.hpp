#pragma once

#include "ivec1.hpp"
#include "ivec2.hpp"
#include "ivec3.hpp"
#include "vec4.hpp"
// #include "mat4.hpp"

namespace mlm {

struct vec4;

struct ivec4 {
	int x;
	int y;
	int z;
	int w;

	ivec4(const int &_x, const int &_y, const int &_z, const int &_w);
	ivec4(const int &_x, const int &_y, const int &_z, const ivec1 &_w);
	ivec4(const int &_x, const int &_y, const ivec1 &_z, const int &_w);
	ivec4(const int &_x, const int &_y, const ivec1 &_z, const ivec1 &_w);
	ivec4(const int &_x, const ivec1 &_y, const int &_z, const int &_w);
	ivec4(const int &_x, const ivec1 &_y, const int &_z, const ivec1 &_w);
	ivec4(const int &_x, const ivec1 &_y, const ivec1 &_z, const int &_w);
	ivec4(const int &_x, const ivec1 &_y, const ivec1 &_z, const ivec1 &_w);
	ivec4(const ivec1 &_x, const int &_y, const int &_z, const int &_w);
	ivec4(const ivec1 &_x, const int &_y, const int &_z, const ivec1 &_w);
	ivec4(const ivec1 &_x, const int &_y, const ivec1 &_z, const int &_w);
	ivec4(const ivec1 &_x, const int &_y, const ivec1 &_z, const ivec1 &_w);
	ivec4(const ivec1 &_x, const ivec1 &_y, const int &_z, const int &_w);
	ivec4(const ivec1 &_x, const ivec1 &_y, const int &_z, const ivec1 &_w);
	ivec4(const ivec1 &_x, const ivec1 &_y, const ivec1 &_z, const int &_w);
	ivec4(const ivec1 &_x, const ivec1 &_y, const ivec1 &_z, const ivec1 &_w);


	ivec4(const ivec2 &_xy, const int &_z, const int &_w);
	ivec4(const ivec2 &_xy, const ivec1 &_z, const int &_w);
	ivec4(const ivec2 &_xy, const int &_z, const ivec1 &_w);
	ivec4(const ivec2 &_xy, const ivec1 &_z, const ivec1 &_w);
	ivec4(const int &_x, const ivec2 &_yz, const int &_w);
	ivec4(const ivec1 &_x, const ivec2 &_yz, const int &_w);
	ivec4(const int &_x, const ivec2 &_yz, const ivec1 &_w);
	ivec4(const ivec1 &_x, const ivec2 &_yz, const ivec1 &_w);
	ivec4(const int &_x, const int &_y, const ivec2 &_zw);
	ivec4(const ivec1 &_x, const int &_y, const ivec2 &_zw);
	ivec4(const int &_x, const ivec1 &_y, const ivec2 &_zw);
	ivec4(const ivec1 &_x, const ivec1 &_y, const ivec2 &_zw);

	ivec4(const ivec2 &_xy, const ivec2 &_zw);
	ivec4(const ivec3 &_xyz, const int &_w);
	ivec4(const ivec3 &_xyz, const ivec1 &_w);
	ivec4(const int &_x, const ivec3 &_yzw);
	ivec4(const ivec1 &_x, const ivec3 &_yzw);

	ivec4(const int &scalar);
	ivec4(const ivec1 &scalar);
	ivec4(const ivec4 &v);


	ivec4();
	~ivec4();

	operator vec4() const;

	int	&operator[](unsigned int i);
	const int	&operator[](unsigned int i) const;

	ivec4	&operator=(const ivec4 &v);

	bool	operator==(const ivec4 &v);
	bool	operator!=(const ivec4 &v);

	ivec4	&operator-=(const ivec4 &v);
	ivec4	&operator-=(const ivec1 &scalar);
	ivec4	&operator-=(const int &scalar);

	ivec4	&operator+=(const ivec4 &v);
	ivec4	&operator+=(const ivec1 &scalar);
	ivec4	&operator+=(const int &scalar);

	ivec4	&operator*=(const ivec4 &v);
	ivec4	&operator*=(const ivec1 &scalar);
	ivec4	&operator*=(const int &scalar);

	ivec4	&operator/=(const ivec4 &v);
	ivec4	&operator/=(const ivec1 &scalar);
	ivec4	&operator/=(const int &scalar);
};

ivec4	operator-(const ivec4 &v1, const ivec4 &v2);
ivec4	operator-(const int &scalar, const ivec4 &v);
ivec4	operator-(const ivec4 &v, const int &scalar);
ivec4	operator-(const ivec1 &scalar, const ivec4 &v);
ivec4	operator-(const ivec4 &v, const ivec1 &scalar);

ivec4	operator+(const ivec4 &v1, const ivec4 &v2);
ivec4	operator+(const int &scalar, const ivec4 &v);
ivec4	operator+(const ivec4 &v, const int &scalar);
ivec4	operator+(const ivec1 &scalar, const ivec4 &v);
ivec4	operator+(const ivec4 &v, const ivec1 &scalar);

ivec4	operator*(const ivec4 &v1, const ivec4 &v2);
ivec4	operator*(const int &scalar, const ivec4 &v);
ivec4	operator*(const ivec4 &v, const int &scalar);
ivec4	operator*(const ivec1 &scalar, const ivec4 &v);
ivec4	operator*(const ivec4 &v, const ivec1 &scalar);

ivec4	operator/(const ivec4 &v1, const ivec4 &v2);
ivec4	operator/(const int &scalar, const ivec4 &v);
ivec4	operator/(const ivec4 &v, const int &scalar);
ivec4	operator/(const ivec1 &scalar, const ivec4 &v);
ivec4	operator/(const ivec4 &v, const ivec1 &scalar);


}
