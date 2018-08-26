#include <iostream>

using namespace std;

main(){
	int thang;
	int nam;
	
	cout <<" Nhap thang can kiem tra" << endl; 
	cin >> thang ;
	switch(thang){
	
		case 1:
			cout <<"thang co 31 ngay va thuoc quy 1";
			break;
		case 3:
			cout <<"thang co 31 ngay va thuoc quy 1";
			break;
		case 4:
			cout <<"thang co 30 ngay va thuoc quy 2";
			break;
		case 5:
			cout <<"thang co 31 ngay va thuoc quy 2";
			break;
		case 6:
			cout <<"thang co 30 ngay va thuoc quy 2";
			break;
		case 7:
			cout <<"thang co 31 ngay va thuoc quy 3";
			break;
		case 8:
			cout <<"thang co 31 ngay va thuoc quy 3";
			break;
		case 9:
			cout <<"thang co 30 ngay va thuoc quy 3";
			break;
		case 10:
			cout <<"thang co 31 ngay va thuoc quy 4";
			break;
		case 11:
			cout <<"thang co 30 ngay va thuoc quy 4";
			break;
		case 12:
			cout <<"thang co 31 ngay va thuoc quy 4";
			break;
		case 2:
			if (thang == 2)
			{
				cout <<"Nhap nam can kiem tra"<< endl;
				cin >> nam;
				if ((nam % 4 == 0&&nam % 100 != 0)|| nam % 400 == 0)
				{
					cout <<"thang co 29 ngay"<< endl;
				}
				else
				{
					cout <<"thang co 28 ngay"<< endl;
				}
			}
			break;
		Default :
			cout <<"thang khong hop le"<< endl;
			break;
			}
			
}
