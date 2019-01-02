// viet chuong trinh thu hien sap xep topo
//sap xep thu tu tuyen tinh ma quan he tien quyet
//phat hien 1 do thi co chu trinh hay khong
//vd: to chuc sinh nhat
/* lap (for while)
- chon 1 dinh khong co cung den (cot j mang gia tri 0)
 xoa tat ca cac cung xuat phat tu j
 + Neu het j: co 1 thu tu topo(do thi khong chu trinh)
 + Nguoc lai: do thi co chu trinh */
 //tao san trong chuong trinh
 // nhap tu ban phim
 // doc tu file ( Input.dat) ma tran ke
 
#include<iostream>
//#include<stdio.h>
 
 using namespace std;
int KiemTra(int c, int a[3][3], int n)
{
	for(int i=0; i<=n; i++)
		if(a[i][c]==1)
			return 0;
		return 1;
}
int KiemTraDinh(int t)
{
	for(int i=0; i<dem; i++)
		if(t==mang[i])
			return 0;
		return 1;
}
 
int a[3][3]={0, 1, 0,
 			 0, 0, 1,
			 0, 1, 1
			};
int TimDinh()
{
	for(i=0; i<3; i++)
		if(KiemTra(i,a)==1 && KiemTraDinh(i)==1)
			return i;
		return -1;
}
 void XuatMT()
 {
 	for(int i=0; i<3; i++)
 	{
 		for(int j=0; j<3; j++)
 		{
 			cout << a[i][j] <<" ";
}
 			cout << endl;
	}

 }
int main()
{
	int n;
	
	XuatMT();
}

