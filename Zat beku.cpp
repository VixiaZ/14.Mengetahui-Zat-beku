#include <iostream>
using namespace std;

int main ()
{
	int zat;
	
	cout <<"---Program Mengetahui sebuah zat beku atau tidak---"<<endl;
	
	cout <<"\nmasukan temperatur Zat tersebut dalam `C = ";
	cin >>zat;
	
	// script untuk mengetahui zat tersebut beku atau tidak by @ Zulfikar
	
	if (zat <= 0)
	{
		cout<<"\nzat tersebut telah beku"<<endl;
	}
	else if (zat > 10)
	{
		cout<<"\nzat tersebut belum beku"<<endl;
	}
	elseO if (zat <= 10 )
	{
		cout<<"\nzat tersebut hampir beku"<<endl;
	}
	
	return 0; 
	// penghitungan zat tersebut berdasarkan berhitungan titik beku air
}
