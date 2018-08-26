#include <iostream>
using namespace std;
string xuatthang(int n)
{
	int nam;
	switch(n){
		case 1:
			return "Thang co 30 ngay";
			break;
		case 3:
			return "thang co 31 ngay";
			break;
		case 4:
			return "thang co 30 ngay ";
			break;
		case 5:
			return "thang co 31 ngay ";
			break;
		case 6:
			return "thang co 30 ngay ";
			break;
		case 7:
			return "thang co 31 ngay ";
			break;
		case 8:
			return "thang co 31 ngay ";
			break;
		case 9:
			return "thang co 30 ngay ";
			break;
		case 10:
			return "thang co 31 ngay ";
			break;
		case 11:
			return "thang co 30 ngay ";
			break;
		case 12:
			return "thang co 31 ngay ";
			break;
		case 2:
			if (n== 2)
			{
				cout<<"Nhap nam can kiem tra"<<endl;
				cin >> nam;
				if ((nam % 4 == 0&&nam % 100 != 0)|| nam % 400 == 0)
				{
					return "thang co 29 ngay";
				}
				else
				{
					return "thang co 28 ngay";
				}
			}
			break;
		Default :
			return "thang khong hop le";
			break;
			}
			
}
main()
{
	int a;
	string kq;
	cout <<"Hay nhap thang va nam"<< endl;
	cin >> a;
	kq=xuatthang(a);
	cout <<kq<< endl;
}



