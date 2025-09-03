#include "../mlm/mat4.hpp"

namespace mlm {

mat4	transpose(const mat4 &m)
{
	mat4	ret;
	ret[0][0] = m[0][0];
	ret[0][1] = m[1][0];
	ret[0][2] = m[2][0];
	ret[0][3] = m[3][0];
	
	ret[1][0] = m[0][1];
	ret[1][1] = m[1][1];
	ret[1][2] = m[2][1];
	ret[1][3] = m[3][1];

	ret[2][0] = m[0][2];
	ret[2][1] = m[1][2];
	ret[2][2] = m[2][2];
	ret[2][3] = m[3][2];

	ret[3][0] = m[0][3];
	ret[3][1] = m[1][3];
	ret[3][2] = m[2][3];
	ret[3][3] = m[3][3];
	return (ret);
}

}
