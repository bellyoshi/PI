#include "stdafx.h"
#include "BigDecimal.h"


BigDecimal::BigDecimal()
{
	for (int i = 1; i < 1000; i++) {
		data[i] = 0;
	}
}

BigDecimal::BigDecimal(int num)
{
	data[0] = num;
	for (int i = 1; i < sizeof(data) / sizeof(data[0]); i++) {
		data[i] = 0;
	}
}

BigDecimal BigDecimal::operator/(int num)
{
	BigDecimal d;
	int amari = 0;
	for (int i = 0; i < 1000; i++) {
		int op = amari * 10 + this->data[i];
		d.data[i] = op / num;
		amari = op % num;
	}
	return d;
}

BigDecimal BigDecimal::operator+(BigDecimal op2)
{
	BigDecimal b;
	int d = 0;
	for (int i = 1000 - 1; i >= 0; i--) {
		int ans = this->data[i] + op2.data[i] + d;
		b.data[i] = ans % 10;
		if (10 <= ans) {
			d = 1;
		}
		else {
			d = 0;
		}
	}
	return b;
}

BigDecimal BigDecimal::operator-(BigDecimal op2)
{
	BigDecimal b;
	int d = 0;
	for (int i = 1000 - 1; i >= 0; i--) {
		int ans = this->data[i] - op2.data[i] - d;
		if (ans < 0) {
			b.data[i] = ans + 10;
			d = 1;
		}
		else {
			d = 0;
			b.data[i] = ans;
		}
	}
	return b;
}

std::string BigDecimal::ToString()
{
	char c[1002];
	c[0] = data[0] + '0';
	c[1] = '.';
	int end = 1;
	for (int i = 1; i < 1000; i++) {
		c[i + 1] = data[i] + '0';
		if (data[i] != 0) {
			end = i + 2;
		}
	}
	c[end] = '\0';
	return std::string(c);
}

BigDecimal::~BigDecimal()
{
}
