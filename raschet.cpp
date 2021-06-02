#include "Func.h"
#include "CRat.h"
#include "CVectRat.h"

void raschet(void) {
	int size;
	cout << "Vvedite dlinu vectora" << endl;
	cin >> size;

	CVectRat vect1(size);
	CVectRat vect2(size);
	gorCVectRat vect3(size);
	vertCVectRat vect4(size);
	CRat m;

	vect1 = input(size);
	vect2 = input(size);

	cout << "________________________________________" << endl;
	cout << "\n";
	vect3 = vect1 + vect2;
	vect3.print();
	vect4 = vect3;
	std::cout << "\n";
	vect3 = vect1 - vect2;
	vect3.print();
	cout << "\n";
	m = vect1 * vect2;
	m.print();
	cout << "\n";
	vect4.print();
	vect4 = vect3;
	vect4.print();
	m.print();
	cout << "________________________________________" << endl;
	cout << "\n";
};
