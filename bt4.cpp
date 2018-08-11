#include <iostream>
using namespace std;
main()
{
	int n;
	float t=0;
	float s=1;
	cout <<"nhap so n"<< endl;
	cin >> n ; 
	for (float a=1;a<=n;a++){
	t+=1/a;
	s*=t;
	}
	cout <<"Tong tren S"<<"\t"<< s<< endl;
	}
