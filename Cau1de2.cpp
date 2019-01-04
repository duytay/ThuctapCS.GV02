#include <stdio.h>
#include <conio.h>

int n=4;
int thutu=2;
int a[5][5]={0,1,0,1,0,
			 0,0,1,1,1,
			 0,0,0,0,1,
			 0,0,0,0,0,
			 0,0,0,0,0};
int tt[5];
// xoa cung den tu dinh j
void xoacung(int j)
{
	int k;
		for(k=0;k<=n;k++)
			a[j][k]=0;
}
// khai bao mang 1 chieu vet
//int vet[5];
void ghinhan(int j, int  &thutu)
{
	tt[j]=thutu;
		thutu=thutu+1;
	xoacung(j);	
}

// Ham tra ve dinh khong co cung den, -1 khong co cung den
int dinhkd(int a[5][5], int n)
{
	int i, j=0;
	int kt;
		while(j<=n)
		{
		kt=0;
		for(i=0;i<=n;i++)
			if(a[i][j]!=0)
				kt=3;
			if((kt==0)&&(tt[j]==0))
			{
				ghinhan(j,thutu);
				thutu+1;
				return j;		
			}
			else{
				kt=0;
				j=j+1;
				}
		}
    return -1;
}


// kiem tra so dinh da duoc chon
void ktra(int tt[5], int n)
{
	int k, dem=0;
	for(k=0; k<=n; k++)
		if(tt[k]!=0)
			dem=dem+1;
			if(dem!=n+1)
				printf("\n khong sap xep topo ");
			else
			{
				for (k=2; k<=n+2; k++)
					for (int i=0; i<=n; i++)
					if (tt[i]==k)
					printf("%3d", i);
			}
}

int main()
{
	int dinh;
	int sddc=0; //so dinh da chon
	
	do
	{
		dinh=dinhkd(a,n);
	//	printf("%3d", dinh);
		if((dinh!=-1) && (sddc<=n))
		{
		
			if(tt[dinh]!=0)
			{
//				ghinhan(dinh);
//				thutu+1;
//				xoacung(dinh);
				sddc=sddc+1;
			}
		}
	} while(dinh!=-1 && (sddc<=n));
	ktra(tt,n);
//	printf("\n dinh khong co cung den: %d", dinhkd(a,n));
	return 0;
}

