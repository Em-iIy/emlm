#pragma once

namespace mlm {

struct ivec1 {
	int x;

	ivec1(const int &_n);
	ivec1(const ivec1 &src);

	ivec1();
	~ivec1();

	int	&operator[](unsigned int i);
	const int	&operator[](unsigned int i) const;

	ivec1	&operator=(const ivec1 &v);
	ivec1	&operator=(const int &scalar);

	bool	operator==(const ivec1 &v);
	bool	operator==(const int &scalar);
	bool	operator!=(const ivec1 &v);
	bool	operator!=(const int &scalar);


	ivec1	&operator-=(const ivec1 &v);
	ivec1	&operator-=(const int &scalar);

	ivec1	&operator+=(const ivec1 &v);
	ivec1	&operator+=(const int &scalar);

	ivec1	&operator*=(const ivec1 &v);
	ivec1	&operator*=(const int &scalar);

	ivec1	&operator/=(const ivec1 &v);
	ivec1	&operator/=(const int &scalar);
};

ivec1	operator-(const ivec1 &v, const int scalar);
ivec1	operator-(const int &scalar, const ivec1 &v);
ivec1	operator-(const ivec1 &v, const ivec1 &v2);

ivec1	operator+(const ivec1 &v, const int scalar);
ivec1	operator+(const int &scalar, const ivec1 &v);
ivec1	operator+(const ivec1 &v, const ivec1 &v2);

ivec1	operator*(const ivec1 &v, const int scalar);
ivec1	operator*(const int &scalar, const ivec1 &v);
ivec1	operator*(const ivec1 &v, const ivec1 &v2);

ivec1	operator/(const ivec1 &v, const int scalar);
ivec1	operator/(const int &scalar, const ivec1 &v);
ivec1	operator/(const ivec1 &v, const ivec1 &v2);

}
