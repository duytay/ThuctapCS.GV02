#include <stdio.h>
#include <conio.h>
#include <string.h>

struct nut
{
	char nd[80];
	nut *sau, *truoc;
};
nut *dau;
//-------------------------------------
void khoitao(nut *&dau)
{
	dau = NULL;
}
//-------------------------------------
void nhapvb (nut *&dau)
{
	nut *p,*q;
	char ndt[80];
	int i=1;
	do
	{
		printf("\n Nhap dong %d: ", i);
		fflush(stdin);
		gets(ndt);
			if (strcmp(ndt, "\0")!=0)
			{ //tao nut moi
				p= new nut;
				strcpy(p -> nd, ndt);
				p -> sau=NULL;
				p -> truoc=NULL;
			  //moc vao van ban
			  if (dau==NULL)
			  dau=p;
			  else
			  {
			  	q->sau=p;
			  	p->truoc=q;
			  	q=p;
			
			  }
			}
			i++;
	}
	while (strcmp(ndt, "\0")!=0);
}
//--------------------------------------------
void duyetvb (nut *dau)
{
	if (dau!=NULL)
	{
		printf("\n %s", dau ->nd);
		duyetvb(dau -> sau);
	}
}
//--------------------------------------------
void xoadong(nut *&dau, int i)
{
	nut *p, *t, *s;
	int k=1;
	p= dau;
	while (( p != NULL) &&(k!=i) )
	{
		p = p -> sau;
		k=k+1;
	}
	if (p!=NULL)
	{
		// truong hop p == dau
		if(p==dau)
		{
			dau = dau -> sau;
			dau -> truoc =NULL;
		}
		else
		// truong hop p nut cuoi
		if ( p -> sau == NULL)
		{
			t = p -> truoc;
			t -> sau = NULL;
		}
		else
		// truong hop p ko dau ko cuoi
		if((p!=dau) && (p-> sau !=NULL))
		{
			t = p -> truoc;
			s = p -> sau;
				t -> sau = s;
				s -> truoc  = t;
				delete p;
		}
	}
}
void xoadongij(nut *&dau, int i, int j)
{
	int k;
	for (k=i; k <= i; k++)
		xoadong(dau, i);
}
//---------------------------------------
int main()
{
	khoitao(dau);
	nhapvb(dau);
	duyetvb(dau);
//	printf("\n Xoa dong 1 \n");
//	xoadong(dau, 1);
	printf("\n xoa dong 4 den 6 \n");
	xoadongij(dau,4,6);
	duyetvb(dau);
	return 0;
	getch();
}
