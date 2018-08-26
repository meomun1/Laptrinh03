#include <iostream>
using namespace std;
int tinhtong(int n){
	int a=0;
	for ( int i; i<n;i++)
	{
		 a+=i;
	}
	return a;
}
main()
{
	int n,tong;
	cout <<"Nhap so n"<< endl;
	cin >> n ;
	tong=tinhtong(n+1);
	cout <<"Tong la:" << tong << endl;
}
