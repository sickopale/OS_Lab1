#pragma once

#ifdef VECTORDLL_EXPORTS
#define VECTORDLL __declspec(dllexport)
#else
#define VECTORDLL __declspec(dllimport)
#endif

#include <string>
#include "..\NumberLibrary\Number.h"
#include <cmath>

namespace vector {
	class VECTORDLL Vector {
	public:
		Vector(Number::Number x = 0, Number::Number y = 0);
		Vector operator+(const Vector& secondVector);
		Number::Number getRaduis();
		Number::Number getAngle();
		std::string toString();
	private:
		Number::Number x;
		Number::Number y;
	};
	const Vector ZERO_VECTOR = Vector(Number::ZERO, Number::ZERO);
	const Vector ONE_VECTOR = Vector(Number::ONE, Number::ONE);
}