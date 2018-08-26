#include <iostream>
using namespace std;
int tongtich(int n)
{
	int a=1;
	int b=0;
	for (int i=1 ; i<n;i++)
	{
		a*=i;
		b+=a;
	}
	return b;
}
main()
{
	int n;
	cin >> n;
	int sum;
	sum=tongtich(n+1);
	cout <<"Ket qua la:"<< sum << endl;
}	
