#include <iostream>
#include <string> 
#include <math.h>
#include "Square.h"
using namespace std;

void main()
{	
	int k, p, t;
	int S1, S2, S3, Sq, C;
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
			p = (S1 + S2 + S3) / 2;
			Sq = sqrt(p * (p - S1) * (p - S2) * (p - S3));
			cout << "The Square of Triangle is: " << Sq << endl;
			C += 1;
			brck;
		case 2:
			cout << "Insert the sides of Rectangle: " << endl;
			cin >> S1 >> S2;
			Sq = S1 * S2;
			cout << "The Square of Rectangle is: " << Sq << endl;
			C += 1;
		case 3:
			cout << "Insert the side of Quadrante: " << endl;
			cin >> S1;
			Sq = S1 * S1;
			cout << "The Square of Quadrante is: " << Sq << endl;
			C += 1;

		case 4:
			cout << "Insert the side and the angle between this sides of Rhombus: " << endl;
			cin >> S1 >> S2;
			Sq = S1 * S1 * sin(S2);
			cout << "The Square of Rectangle is: " << Sq << endl;
			C += 1;
		}
		cout << "If You want to calculate the Square of another figure press 1, if want to end press 0: " << endl;
		cin >> t;
		if (t == 0) tr = false;
	}
}