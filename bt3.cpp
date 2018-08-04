#include <iostream>
using namespace std;
main()
{
	int a , b , c;
	cout <<"hay nhap lan luot 3 so nguyen a , b , c"<< endl;
	cin >> a >> b >> c;
	if (a>b&&c)
	{
		cout << "so lon nhat la a"<<endl ;
	}
	else if (c>b)
	{
		cout <<  "so lon nhat la c"<<endl ;
	
	}
	else if (b>c)
	{
		cout <<  "so lon nhat la b"<<endl ;
	}
}
