#include "pch.h" 
#include "vector.h"

namespace vector {
	Vector::Vector(Number::Number x, Number::Number y) :x(x), y(y) {}
	Vector Vector::operator+(const Vector& secondVector) {
		return Vector(x + secondVector.x, y + secondVector.y);
	}
	Number::Number Vector::getRaduis() {
		return Number::Number(sqrt((x * x + y * y).getNumber()));
	}
	Number::Number Vector::getAngle() {
		return x.getNumber() == 0 ? Number::Number(atan((y / x).getNumber())) : 0;
	}
	std::string Vector::toString() {
		std::string vectorStr = "( " + std::to_string(x.getNumber()) + " " + std::to_string(y.getNumber()) + " )";
		return vectorStr;
	}
}