#include <stdio.h>

/************************************
Program segitiga
Deskripsi : Membuat segitiga dengan tumpukan bintang ganjil
IS : User siap memasukkan jumlah tumpukan piramid bintang
FS : Segitiga piramid terbentuk

Dibuat oleh
Nama : Diaz Adha Asri Prakoso
Tanggal :  14 Desember 2018
**************************************/

void main (void)

{	int n, i, j;

	printf ("Masukkan jumlah tumpukan bintang piramid = ");
	scanf ("%d", &n);
	
	for (i=1; i<=n; i++)
	{
		for (j=1; j<=n-i; j++)
		{
			printf (" ");
		}
		for (j=1; j<2*i; j++)
		{
			printf ("*");
		}
		printf (" ");
		printf ("\n");
	}
}
 
