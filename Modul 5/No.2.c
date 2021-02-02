#include <stdio.h>

/************************************
Program segitiga
Deskripsi : Membuat segitiga kearah kiri
IS : User siap memasukkan nilai 
FS : Segitiga terbentuk sesuai keinginan

Dibuat oleh
Nama : Diaz Adha Asri Prakoso
Tanggal :  14 Desember 2018
**************************************/

void main (void)

{	int n, i, j, v;

	printf ("Masukkan nilai = ");
	scanf ("%d", &n);
	
	v=1;
	for (i=1; i<=n; i++)
	{
		for (j=1; j<=n-i; j++)
		{
			printf (" ");
		}
		for (j=1; j<=i; j++)
		{
			printf ("*");
		}
		printf (" ");
		printf ("\n");
	}
	
	for (i=1; i<n; i++)
	{
		for (j=1; j<=i; j++)
		{
			printf (" ");
		}
		for (j=1; j<=n-v; j++)
		{
			printf ("*");
		}
		v=v+1;
		printf (" ");
		printf ("\n");
	}
	
}
