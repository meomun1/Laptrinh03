#include <iostream>
using namespace std;
 int Sln( int a, int b , int c){
	if (a > c && a >b)
	{
		return a;
	}
	else  if ( b>c)
	{
		return b;
	}
	else if ( c>b)
	{
		return c;
	}
}
int main()
{
	int a , b , c ;
	int max;
	cout <<"Nhap ba so a b c"<< endl;
	cin >> a >> b >> c;
	max=Sln(a,b,c);
	cout <<"So lon nhat la"<< max << endl;
}
