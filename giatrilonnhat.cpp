#include<iostream>
using namespace std;
main(){
	int a,b,c,max;
	cout<< "Nhap 3 so nguyen lan luot la : "<<endl;
	cin>>a>>b>>c;
	max=a;
	if(max<b)max=b;
	if(max<c)max=c;
		cout<<"Gia tri lon nhat la: "<<max;
	

}
