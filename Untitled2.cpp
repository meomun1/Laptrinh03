#include <iostream>
using namespace std;
main()
{
	int n;
	int t=1, s=0 ;
	cout <<"nhap so n de tim ket qua"<< endl;
	cin >> n ;
	for (int a=1;a<=n;a++){
	t*=a;
	s+=t;
	}
	cout <<"Ket qua S la "<<"\t" <<  s <<  endl;
	

}
