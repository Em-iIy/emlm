#include "../mlm/mat4.hpp"

namespace mlm {

vec4	row(const mat4 &m, unsigned int index)
{
	vec4 ret;
	for (unsigned int i = 0; i < 4; ++i)
		ret[i] = m[i][index];
	return (ret);
}

vec4	column(const mat4 &m, unsigned int index)
{
	return (m[index]);
}

}
