#pragma once

#include "../vec1.hpp"
#include "../vec2.hpp"
#include "../vec3.hpp"
#include "../vec4.hpp"
#include <iostream>

std::ostream &operator<<(std::ostream &o, const mlm::vec1 &v) {
	o << "(" << v.x << ")";
	return (o);
}

std::ostream &operator<<(std::ostream &o, const mlm::vec2 &v) {
	o << "(" << v.x << ", " << v.y << ")";
	return (o);
}

std::ostream &operator<<(std::ostream &o, const mlm::vec3 &v) {
	o << "(" << v.x << ", " << v.y << ", " << v.z << ")";
	return (o);
}

std::ostream &operator<<(std::ostream &o, const mlm::vec4 &v) {
	o << "(" << v.x << ", " << v.y << ", " << v.z << ", " << v.w << ")";
	return (o);
}
