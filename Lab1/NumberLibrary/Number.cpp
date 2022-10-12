#include "Number.h"

namespace Number {
	Number::Number(double Val) { value = Val; }
	Number Number::operator+(const Number& Val) {
		return (value + Val.value);
	}
	Number Number::operator-(const Number& Val) {
		return (value - Val.value);
	}
	Number Number::operator*(const Number& Val) {
		return (value * Val.value);
	}
	Number Number::operator/(const Number& Val) {
		return (value / Val.value);
	}
	double Number::getNumber() const {
		return value;
	}
	void Number::setNumber(double numb) {
		value = numb;
	}
	Number CreateNumber(double value) {
		return Number(value);
	}
	Number CreateNumberFromNumber(Number numb) {
		return Number(numb);
	}
}