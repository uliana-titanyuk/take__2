#pragma once
#include <iostream>
#include <string>
#include <algorithm> 
#include <stdio.h>
#include <math.h>
using namespace std;


class CRat {

private:
	int num;
	unsigned den;
public:
	CRat() {
		this->num = 0;
		this->den = 1;
	};
	CRat(int num, unsigned den) {
		this->num = num;
		this->den = den;
	};
	int GetNum() const{
		return num;
	};
	unsigned GetDen() const {
		return den;
	};
	CRat operator+(const CRat& b);
	CRat operator-(const CRat& b);
	CRat operator*(const CRat& b);
	CRat& operator=(const CRat& b);
	void print();

};
