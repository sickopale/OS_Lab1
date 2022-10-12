#pragma once
namespace Number {
	class Number {
	public:
		double value = 0;
		Number(double Val);
		Number operator+(const Number& Val);
		Number operator-(const Number& Val);
		Number operator*(const Number& Val);
		Number operator/(const Number& Val);
		double getNumber() const;
		void setNumber(double numb);
	};
		Number CreateNumber(double val);
		Number CreateNumberFromNumber(Number numb);
		const Number ZERO = Number(0);
		const Number ONE = Number(1);
	}