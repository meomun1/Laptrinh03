#include <iostream>
using namespace std;
string xuatthang(int n)
{
	int nam;
	switch(n){
		case 1:
			return " thuoc quy 1";
			break;
		case 3:
			return " thuoc quy 1";
			break;
		case 4:
			return " thuoc quy 2 ";
			break;
		case 5:
			return " thuoc quy 2";
			break;
		case 6:
			return " thuoc quy 2 ";
			break;
		case 7:
			return " thuoc quy 3 ";
			break;
		case 8:
			return "thuoc quy 3 ";
			break;
		case 9:
			return " thuoc quy 3  ";
			break;
		case 10:
			return "thuoc quy 4 ";
			break;
		case 11:
			return "thuoc quy  4";
			break;
		case 12:
			return "thuoc quy  4";
			break;
		case 2:
			return "thuoc quy 4";
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
