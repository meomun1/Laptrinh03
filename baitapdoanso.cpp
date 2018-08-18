#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
main()
{
	int loi=1,maynhap,nguoinhap;
	srand(time(NULL));
	maynhap=rand()%100+1;
	while(1)
	{
		cout <<"Hay doan so bang cach nhap" << endl;
		cin >> nguoinhap;
		if (maynhap==nguoinhap)
		{
			cout <<"Ban doan dung roi! so cua may doan la: " << maynhap << endl;
			break;
		}
		else if (maynhap>nguoinhap)
		{
			cout <<"ban doan nho hon so may doan" << endl;
			loi++;
		}
		else
		{
			cout <<"Ban doan lon hon so may doan" << endl;
			loi++;
		}
		if (loi>5)
		{
			cout <<"Ban da thua so may doan la: " << maynhap << endl;
			break;
		}
	}
}
