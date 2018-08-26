#include <iostream>
using namespace std;
int tinhTong (int a,int b,int c){
	return a+b+c;
}
int tinhHieu (int a,int b,int c){
	return a-b-c;
}
int tinhTich (int a,int b,int c){
	return a*b*c;
}
float tinhThuong (float a,float b,float c){
	return a/b/c;
}
 main()
{
	int a,b,c;
	float tong, hieu, thuong, tich;
	cin >> a >> b >> c ;
	tong=tinhTong(a,b,c);
	hieu=tinhHieu(a,b,c);
	tich=tinhTich(a,b,c);
	thuong=tinhThuong(a,b,c);
	cout <<"Tong la:"<< tong << endl;
	cout <<"Hieu la:"<< hieu << endl;
	cout <<"Tich la:"<< tich << endl;
	cout <<"Thuong la:"<< thuong << endl;
}
