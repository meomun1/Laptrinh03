#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n, max, a,d, min, Sum;

	cout << " nhap so nguyen n :" << endl;
	cin >> n;
	a = n;
	max = a % 10;

	min = a % 10;
	
	while (a != 0)
	{

		d = a % 10;
		a = a / 10;
		Sum+=d;
		if (max < d)
		{
			max  = d;
		}
		if (min >d)
		{
			min = d;
		}
	}
	cout <<"so lon nhat la:"<< max << endl;
	cout <<"So nho nhat la:"<< min << endl;
	cout <<"Tong cac chu so la: "<< Sum << endl;
}
	
