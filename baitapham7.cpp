#include <iostream>
#include <cmath>
using namespace std;
float giaiptbac2(float a, float b, float c){
	float delta;
	delta=pow(b,2)-4*a*c;
	if (a == 0)
	{
		if (b == 0)
		{
			if (c==0)
			{
				return 3;
			}
			else 
			{
				return -1;
			}
		}
		else
		{
			if (c==0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
	}
	else
	{
		if(delta>0)
		{
			return 2;
		}
		if(delta<0)
		{
			return -1;
		}
		else
		{
			return 1;
		}
	}

			
}

main()
{
	int a,b,c;
	int kq;
	float delta;
	delta=(pow(b,2)-4*a*c);
	float x,y,z;
	x=(-b/a);
	y=-b+sqrt(delta)/2*a;
	z=-b-sqrt(delta)/2*a;
	cout <<"Nhap 3 so a,b,c de giai phuong trinh"<< endl;
	cin >> a >> b >> c;
	kq=giaiptbac2(a,b,c);
	if(kq==-1)
	{
		cout <<"Phuong trinh vo nghiem"<< endl;
	}
	else if(kq==2)
	{
		cout <<"Nghiem thu nhat "<<y<< endl; 
		cout <<"Nghiem thu hai "<<z << endl; 
	}
	else if (kq==1)
	{
		cout <<"Phuong trinh co mot nghiem "<< x << endl;
	}	
	else if (kq==3)
	{
		cout <<"Phuong trinh co nghiem bang 0"<<endl;
	}
}
	
	
