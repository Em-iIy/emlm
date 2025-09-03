#include <cmath>

#include "../mlm/mat4.hpp"
#include "../mlm/angles.hpp"

namespace mlm {

// perspective
// http://www.songho.ca/opengl/gl_projectionmatrix.html#perspective
// https://www.scratchapixel.com/lessons/3d-basic-rendering/perspective-and-orthographic-projection-matrix/building-basic-perspective-projection-matrix.html
mat4	perspective(const float &fov, const float &near, const float &far)
{
	float scale = 1 / tan(fov * 0.5 * M_PI / 180);
	float diff = far - near;
	return (mat4(
		scale, 0.0f, 0.0f, 0.0f,
		0.0f, scale, 0.0f, 0.0f,
		0.0f, 0.0f, -(far / diff), -1.0f,
		0.0f, 0.0f, -((far * near) / diff), 0.0f
	));
}

mat4	perspective(const float &fov, const float &aspect, const float &near, const float &far)
{
	float tan_fov = tan(radians(fov) / 2);
	float diff = far - near;
	return (mat4(
		1.0f / (aspect * tan_fov), 0.0f, 0.0f, 0.0f,
		0.0f, 1.0f / tan_fov, 0.0f, 0.0f,
		0.0f, 0.0f, -(far + near) / diff, -1.0f,
		0.0f, 0.0f, -(far * near) / diff, 0.0f
	));
}

mat4	ortho(const float &left, const float &right, const float &bottom, const float &top)
{
	float	hor_diff = right - left;
	float	vert_diff = top - bottom;
	return (mat4(
		2.0f / hor_diff, 0.0f, 0.0f, 0.0f,
		0.0f, 2.0f / vert_diff, 0.0f, .0f,
		0.0f, 0.0f, -1.0f, 0.0f,
		-(right + left) / hor_diff, -(top + bottom) / vert_diff, 0.0f, 1.0f
	));
}

mat4	ortho(const float &left, const float &right, const float &bottom, const float &top, const float &near, const float &far)
{
	float	hor_diff = right - left;
	float	vert_diff = top - bottom;
	float	depth_diff = far - near;
	return (mat4(
		2.0f / hor_diff, 0.0f, 0.0f, 0.0f,
		0.0f, 2.0f / vert_diff, 0.0f, .0f,
		0.0f, 0.0f, -1.0f / depth_diff, 0.0f,
		-(right + left) / hor_diff, -(top + bottom) / vert_diff, -(far + near) / depth_diff, 1.0f
	));
}

}