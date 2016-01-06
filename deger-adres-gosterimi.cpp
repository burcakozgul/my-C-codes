//adres ve deger gosterimi
#include <stdio.h>
#include <conio.h>
int main () 
{
	int *ptam,tam[5]={1,2,3,4,5};
	ptam=&tam[0];
	for (int i=0;i<5;i++){
		printf ("%d. elemanin adresi: %p\t",i+1,ptam+i);
		printf ("icerik: %d\n",*(ptam+i));
	}
	getch();
	return 0;
}
