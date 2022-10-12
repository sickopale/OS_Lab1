#include <iostream>
#include "Number.h"
#include "..\DynamicVector\Vector.h"


int main() {
	Number::Number first = Number::Number(5);
	Number::Number second = Number::Number(3);
	std::cout << (first + Number::ONE).getNumber() << '\n';
	std::cout << (first - Number::ZERO).getNumber() << '\n';
	std::cout << (first * second).getNumber() << '\n';
	std::cout << (first / second).getNumber() << '\n';
	vector::Vector ort = vector::Vector(Number::ONE, Number::ONE);
	std::cout << (ort + vector::ONE_VECTOR).toString();
	return 0;
}