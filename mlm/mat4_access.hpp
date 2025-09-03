#pragma once

#include "../mlm/mat4.hpp"

namespace mlm {

vec4	row(const mat4 &m, unsigned int index);
vec4	column(const mat4 &m, unsigned int index);

}
