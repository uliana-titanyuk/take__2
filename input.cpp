#include <fstream>
#include "Func.h"
#include "CRat.h"
#include "CVectRat.h"

CVectRat input(int size) {
	
	int vecType = -1;
	std::cout << "Input 0 for horizontal vector and 1 for vertical:\n";
	std::cin >> vecType;
	if (vecType !=0 && vecType != 1) {
		std::cerr << "Error! Wrong input!\n";
		exit(1);
	}

	CVectRat* m = (vecType == 0) ? static_cast<CVectRat*>(new gorCVectRat(size)) : static_cast<CVectRat*>(new vertCVectRat(size));
	unsigned den;
	unsigned num;
	//FILE* ifile = fopen("data.txt", "r");
	std::ifstream ifile("data.txt");

	CRat a;
	int num_;
	int den_;
	if (!ifile) {
		printf("error, no file");
		return -1;
	}
	else {
		int i = -1;

		//m = (CVectRat*)malloc(sizeof(CVectRat));
		
		while (!ifile.eof())
		{
			ifile >> num;
			ifile >> den;
			i += 1;
			a = CRat(num, den);
			m->Set_arr(i, a);
			cout << "Vy vveli";
			m->print();
		}


		cout << "Vy vveli vector\t\n\n";
		m->print();
		cout << endl;

		//delete m;

		return *m;
	}
};
