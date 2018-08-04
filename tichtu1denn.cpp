#include <iostream>
using namespace std;
 int main()
{
	int b=1;
	int n;
	cout <<"Nhap so n"<< endl;
	cin >> n;
	for (int a=1;a<=n;a++)
	  b*=a;
	  
		cout << "Tich cac so tu 1 den" <<  n  <<  " la : "<<b<<"\n";
	
	return 0;
}	
