#include <stdio.h>

/**********************************************
Program Ganjil Genap
Deskripsi : Mengetahui bilangan yang diinput ganjil atau genap
IS : User siap menginput angka
FS : Di layar tertulis bilangan ganjil / genap

Dibuat oleh :
Nama : Diaz Adha Asri Prakoso
Tanggal : 24 Oktober 2018
**********************************************/

void main (void)

//KAMUS
{	int a;
//ALGORITMA	
	scanf ("%d", &a);
	
	if (a %2 ==0)
	{
		printf ("%d adalah bilangan genap \n", a);
	}
	else //a %2 !=0
	{
		printf ("%d adalah bilangan ganjil \n", a);
	}
	
	system ("PAUSE");
}
