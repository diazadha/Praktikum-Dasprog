#include <stdio.h>

/************************************
Program matriks
Deskripsi : Membuat matriks bilangan ganjil
IS : User siap memasukkan jumlah baris dan kolom
FS : Matriks angka ganjil terbentuk

Dibuat oleh
Nama : Diaz Adha Asri Prakoso
Tanggal :  14 Desember 2018
**************************************/

void main (void)

{	int a, b, c, d, j, e;
	
	printf ("Berapa banyak baris yang anda inginkan (<5) = ");
	scanf ("%d", &a);
	printf ("Berapa banyak kolom yang anda inginkan (<10) = ");
	scanf ("%d", &b);
	
	d=1;
	for (c=1; c<=a; c++)
	{
		for (j=1; j<=b; j++)
		{
			printf (" %d", d);
			d+=2;
		}
		e=1;
		d=e;
		printf ("\n");
	}
}
