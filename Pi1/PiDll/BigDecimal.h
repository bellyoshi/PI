#pragma once
#include <string>

class BigDecimal
{
private:
	int data[1000];
public:
	BigDecimal();
	BigDecimal(int num);
	BigDecimal operator/(int num);
	BigDecimal operator+(BigDecimal op2);
	BigDecimal operator-(BigDecimal op2);
	std::string ToString();
	~BigDecimal();
};

