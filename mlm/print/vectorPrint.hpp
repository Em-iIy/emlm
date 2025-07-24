#pragma once

#include "../vec1.hpp"
#include "../vec2.hpp"
#include "../vec3.hpp"
#include "../vec4.hpp"
#include <iostream>

inline std::ostream &operator<<(std::ostream &o, const mlm::vec1 &v) {
	o << "(" << v.x << ")";
	return (o);
}

inline std::ostream &operator<<(std::ostream &o, const mlm::vec2 &v) {
	o << "(" << v.x << ", " << v.y << ")";
	return (o);
}

inline std::ostream &operator<<(std::ostream &o, const mlm::vec3 &v) {
	o << "(" << v.x << ", " << v.y << ", " << v.z << ")";
	return (o);
}

inline std::ostream &operator<<(std::ostream &o, const mlm::vec4 &v) {
	o << "(" << v.x << ", " << v.y << ", " << v.z << ", " << v.w << ")";
	return (o);
}

inline std::ostream &operator<<(std::ostream &o, const mlm::ivec1 &v) {
	o << "(" << v.x << ")";
	return (o);
}

inline std::ostream &operator<<(std::ostream &o, const mlm::ivec2 &v) {
	o << "(" << v.x << ", " << v.y << ")";
	return (o);
}

inline std::ostream &operator<<(std::ostream &o, const mlm::ivec3 &v) {
	o << "(" << v.x << ", " << v.y << ", " << v.z << ")";
	return (o);
}

inline std::ostream &operator<<(std::ostream &o, const mlm::ivec4 &v) {
	o << "(" << v.x << ", " << v.y << ", " << v.z << ", " << v.w << ")";
	return (o);
}
