#include <iostream>
using namespace std;
main()
{
	string nguoi;
	float toan,ly,hoa,dtb;
	cout <<"Nhap vao ten sinh vien "<< endl;
	cin >> nguoi;
	cout <<"Nhap vao lan luot cac diem toan ly hoa cua " << nguoi << endl;
	cin >>toan>>ly>>hoa;
	cout <<"Diem trung binh cua hoc sinh la: " << (toan+ly+hoa)/3 << endl;
	dtb=(toan+ly+hoa)/3;
	if  (dtb>=8)
	{
		cout <<"Xep loai xuat sac"<< endl;
	}
	if (8>dtb && dtb>=7)
	{
		cout <<"Xep loai gioi"<< endl;
	}
	if  (7>dtb && dtb>=6)
	{
		cout <<"Xep loai kha"<< endl;
	}
	if (6>dtb && dtb>=5)
	{
		cout <<"Xep loai trung binh"<< endl;
	}
	if (dtb<5)
	{
		cout <<"Xep loai yeu"<< endl;
	}
	
}
