#include <iostream>
#include <string> 
#include <math.h>
#include "Square.h"
using namespace std;

void main()
{	
	int k, p, t;
	int S1, S2, S3, C = 0;
	bool tr = true;
	while (tr == true)
	{
		cout << "Choose the figure for square calculation:" << endl;
		cout << " 1 for Triangle," << endl;
		cout << " 2 for Rectangle," << endl;
		cout << " 3 for Quadrante," << endl;
		cout << " 4 for Rhombus," << endl;
		cin >> k;
		switch (k)
		{
		case 1:
			
			cout << "Insert the sides of Triangle: " << endl;
			cin >> S1 >> S2 >> S3;
			Square::set_S1(S1);
			Square::set_S2(S2);
			Square::set_S3(S3);	
			cout << "The Square of Triangle is: " << Square::get_Sqt() << endl;
			Square::set_C();
			break;
		case 2:
			cout << "Insert the sides of Rectangle: " << endl;
			cin >> S1 >> S2;
			Square::set_S1(S1);
			Square::set_S2(S2);			
			cout << "The Square of Rectangle is: " << Square::get_Sqr() << endl;
			Square::set_C();
			break;
		case 3:
			cout << "Insert the side of Quadrante: " << endl;
			cin >> S1;
			Square::set_S1(S1);			
			cout << "The Square of Quadrante is: " << Square::get_Sqq() << endl;
			Square::set_C();
			break;
		case 4:
			cout << "Insert the side and the angle between this sides of Rhombus: " << endl;
			cin >> S1 >> S2;	
			Square::set_S1(S1);
			Square::set_S2(S2);
			cout << "The Square of Rectangle is: " << Square::get_Sqro() << endl;
			Square::set_C();
			break;
		}
		cout << "if want to end press 0: " << endl;
		cin >> t;
		if (t == 0) tr = false;
	}
	cout << "Total number of operations is: " << Square::get_C();
}