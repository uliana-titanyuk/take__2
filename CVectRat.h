  
#pragma once
#include <iostream>
#include <string>
#include <algorithm> 
#include <stdio.h>
#include <math.h>
#include "CRat.h"
using namespace std;


class CVectRat {
protected:
	CRat* arr;
	int size_;
public:
	CVectRat(int size) {
		
		arr = new CRat[size];
		for (int i = 0; i < size; i++) {
			CRat m;
			arr[i] = m;
		}
		this->size_ = size;

		
	};

	CVectRat(const CVectRat& other) {
		this->size_ = other.size_;
		this->arr = new CRat[other.size_];
		for (int i = 0; i < other.size_; i++) {
			arr[i] = other.arr[i];
		}


	};

	~CVectRat() {
		delete[] arr;
		size_ = 0;
	};
	void Set_arr(int i, CRat m) {
		this->arr[i] = m;
	};
	CRat get(int i) const {
		return this->arr[i];
	}


	/*CVectRat operator+(const CVectRat& b);
	CVectRat operator-(const CVectRat& b);*/
	CRat operator*(const CVectRat& b);
	CVectRat& operator=(const CVectRat& b);
	int size() const;
	virtual void print() const;
};

class gorCVectRat : public CVectRat{
public:
	gorCVectRat(int size) : CVectRat(size) {
	}
	using CVectRat:: operator=;
	virtual void print() const override;

	friend gorCVectRat operator+(const CVectRat& a, const CVectRat& b);
	friend gorCVectRat operator-(const CVectRat& a, const CVectRat& b);
};

class vertCVectRat : public CVectRat {
public:
	vertCVectRat(int size) : CVectRat(size) {
	}
	using CVectRat:: operator=;
	virtual void print() const override;
};

