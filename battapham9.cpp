#include <iostream>
using namespace std;
int tong(int n)
{
	int a=0;
	int b=0;
	for (int i; i<n;i++)
	{
		a+=i;
		b+=a;
	}
	return b;
}
main()
{
	int n;
	cin >> n;
	int sum;
	sum=tong(n+1);
	cout <<"Ket qua la:"<< sum << endl;
}	
