#include <iostream>
using namespace std;
main()
{
	int n;
	cout <<"Nhap so phan tu cua mang"<< endl;
	cin >> n;
	int arr[n];
	int sum;
	int sochan=0,sole=0;
	for (int i=0; i<n;i++)
	{
		cin >> arr[i];
	}
	cout << "Cac phan tu so le la: " << "\t " <<endl;
	for(int i; i < n; i++)
	{
		if(arr[i]%2!=0)
		{
			cout << arr[i] << "\t";
		}
	}
	cout << "Cac phan tu so chan la: " << "\t " <<endl;
	for(int i; i < n; i++)
	{
		if(arr[i]%2==0)
		{
			cout << arr[i] << "\t";
		}
	}
	for (int i=0; i<n; i++)
	{
		sum+=arr[i];
	}
	cout << endl << "Tong mang la "<< sum << endl;
	for (int i=0;i<n;i++)
	{
		if (arr[i]%2==0)
		{
			sochan+=arr[i];
		}
	}
	cout <<"tong so chan la "<< sochan << endl;
	for (int i=0;i<n;i++)
	{
		if (arr[i]%2!=0)
		{
			sole+=arr[i]; 
		}
	}
	cout <<"tong so le la "<< sole << endl;
	int max=arr[0];
	for(int i = 0; i < n; i++)
	{
		if(max < arr[i])
		{
			max = arr[i];
		}
	}
	cout << "Phan tu lon nhat cua mang la: " << max << endl;
	int min=arr[0];
	for (int i=0;i<n;i++)
	{
		if (min>arr[i])
		{
			min=arr[i];
		}		
	}
	cout <<"So nho nhat la "<< min << endl;
	int vitri;
	cout << endl <<"Moi nhap chi so can xoa: ";
	cin >> vitri;
	for (int i = vitri; i < n - 1; i++)
	{
		arr[i] = arr[i+1];		
	}	
	n--;
	cout << "Mang sau khi bi xoa la: " << endl;
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	int pos, t;
	cout << endl << "Nhap vao vi tri can them: " << endl;
	cin >> pos;
	cout << "Nhap vao gia tri can them: " << endl;
	cin >> t;
    for (int i = n; i >= pos + 1;i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = t;
    n++;
	cout << "Mang sau khi duong them la: " << endl;
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}

