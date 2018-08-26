#include <iostream>
using namespace std;
int giaithua(int n){
	int a=1;
	for ( int i; i<n;i++)
	{
		 a*=i;
	}
	return a;
}
main()
{
	int n,tich;
	cout <<"Nhap so n"<< endl;
	cin >> n ;
	tich=giaithua(n+1);
	cout <<"Tich cua giai thua la:" << tich << endl;
}
