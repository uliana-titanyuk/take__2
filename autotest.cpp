#include "Func.h"
#include "CRat.h"
#include "CVectRat.h"

void autotest(void) {
	CVectRat vect1(2), vect2(2), vect3(2);
	CRat m;
	CRat a(1, 2);
	CRat b(2, 3);
	CRat c(1, 2);
	CRat d(3, 4);
	vect1.Set_arr(0, a);
	vect1.Set_arr(1, b);
	vect2.Set_arr(0, c);
	vect2.Set_arr(1, d);
	m = vect1 * vect2;
	if ((m.GetNum() == 36) && (m.GetDen() == 48))
		cout << "Autotest sdan" << endl;
	else
		cout << "Autotest provalen" << endl;
};
